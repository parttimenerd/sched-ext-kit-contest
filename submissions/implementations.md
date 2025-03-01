# Implemented Schedulers

Either put a link to your repository + a description here,
or make the subheading the folder name in which you placed it
and add a description too. These descriptions should help
us to quickly discern what your intention is with this
scheduler.

The following is an example idea from cluosh (https://github.com/sched-ext/fosdem25/pull/2):

## weird_prios

Tries to use a priority queue based on the prio value/whether it's a kernel thread. I don't really have lots of kernel knowledge or ebpf knowledge so this is a bit a mess and probably does not make any sense at all :D Uses the scripts from the minimal_scheduler repo.

## [Taskclicker](https://github.com/Mr-Pine/taskclicker)

*An interactive, fcfs ("first clicked, first served"), gaming scheduler*

Well... As I'm writing this, I'm not sure if this is what I was supposed to build when they tasked me with writing a fcfs scheduler for gaming with focus on interactivity...

Taskclicker let's you experience scheduling first hand, literally. It's a clicker-game scheduler GUI where you have to click on tasks to schedule them. Running tasks earns you syscalls that you can spend on upgrades to make your life easier!
