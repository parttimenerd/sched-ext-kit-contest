# Place for your scheduling ideas

_The following is a sample idea_

## Schedule based on incoming network packages

A scheduler that knows which processes are related to which
server port and can therefore directly schedule (or prioritise)
processes that handle a specific networking packet.
This should reduce latency.

_This could be it. But don't feel shy to add a bit more explanation._

## match-max-host-concurrency

A task scheduler for the parallel workloads running inside a guest
that looks up the value of N = the vm's cpu.max.concurrency [1] field
provided by the host at every timeslice expiration, and places tasks
on 0-N vcpus, in order to match the number of active vcpus on the host
with the value of N.

[1] https://www.fosdem.org/2025/schedule/event/fosdem-2025-6283-a-new-cgroup-cpu-max-concurrency-controller-interface-file/
