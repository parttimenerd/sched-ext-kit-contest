#include "vmlinux.h"
#include <bpf/bpf_helpers.h>
#include <bpf/bpf_tracing.h>

#define SHARED_DSQ_BASE_ID 0
#define SHARED_DSQ_PRIO_ID 1

#define BPF_STRUCT_OPS(name, args...)	\
    SEC("struct_ops/"#name)	BPF_PROG(name, ##args)

#define BPF_STRUCT_OPS_SLEEPABLE(name, args...)	\
    SEC("struct_ops.s/"#name)							      \
    BPF_PROG(name, ##args)

// We use the new names from 6.13 to make it more readable
#define scx_bpf_dsq_insert scx_bpf_dispatch
#define scx_bpf_dsq_insert_vtime scx_bpf_dispatch_vtime
#define scx_bpf_dsq_move_to_local scx_bpf_consume
#define scx_bpf_dsq_move scx_bpf_dispatch_from_dsq
#define scx_bpf_dsq_move_vtime scx_bpf_dispatch_vtime_from_dsq
#define PF_KTHREAD   0x00200000  /* I am a kernel thread */
#define BPF_FOR_EACH_ITER (&___it)

// Initialize the scheduler by creating a shared dispatch queue (DSQ)
s32 BPF_STRUCT_OPS_SLEEPABLE(sched_init) {
    s32 err = scx_bpf_create_dsq(SHARED_DSQ_BASE_ID, -1);
    if (err)
        return err;

    return scx_bpf_create_dsq(SHARED_DSQ_PRIO_ID, -1);
}

// Enqueue a task to the shared DSQ, dispatching it with a time slice
int BPF_STRUCT_OPS(sched_enqueue, struct task_struct *p, u64 enq_flags) {
    u64 dsq_id;

    // Flag everything as prio task that is a kthread, has prio > 100 (how do prio values work?)
    // can't be run on cpu 0 (no idea if that actually works?)
    if ((p->flags & PF_KTHREAD) || p->prio > 100 ||
        !bpf_cpumask_test_cpu(0, p->cpus_ptr)) {
        dsq_id = SHARED_DSQ_PRIO_ID;
    } else {
        dsq_id = SHARED_DSQ_BASE_ID;
    }

    // Calculate the time slice for the task based on the number of tasks in the queue
    u64 slice = 5000000u / scx_bpf_dsq_nr_queued(dsq_id);
    scx_bpf_dsq_insert(p, dsq_id, slice, enq_flags);
    return 0;
}

// Dispatch a task from the shared DSQ to a CPU
int BPF_STRUCT_OPS(sched_dispatch, s32 cpu, struct task_struct *prev) {
    struct task_struct *p;

    if (cpu == 0) {
        // Randomly run prio thread or normal thread on cpu 0
	    s32 random = bpf_get_prandom_u32() % 2;
        if (random)
	        scx_bpf_dsq_move_to_local(SHARED_DSQ_PRIO_ID);
        else
	        scx_bpf_dsq_move_to_local(SHARED_DSQ_BASE_ID);
        return 0;
    }

	scx_bpf_dsq_move_to_local(SHARED_DSQ_PRIO_ID);
    return 0;
}




// Define the main scheduler operations structure (sched_ops)
SEC(".struct_ops.link")
struct sched_ext_ops sched_ops = {
    .enqueue   = (void *)sched_enqueue,
    .dispatch  = (void *)sched_dispatch,
    .init      = (void *)sched_init,
    .flags     = SCX_OPS_ENQ_LAST | SCX_OPS_KEEP_BUILTIN_IDLE,
    .name      = "weird_prios"
};

// License for the BPF program
char _license[] SEC("license") = "GPL";
