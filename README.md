# Sched-ext Scheduler Contest FOSDEM'25

![Scheduler Contest Logo](./img/sched_contest.png)

Writing custom Linux schedulers is pretty easy using sched-ext. You can write your own tiny scheduler in a few lines of code using [C](https://mostlynerdless.de/blog/2024/10/25/a-minimal-scheduler-with-ebpf-sched_ext-and-c/), [Rust](https://github.com/sched-ext/scx), or even [Java](https://mostlynerdless.de/blog/2024/09/10/hello-ebpf-writing-a-linux-scheduler-in-java-with-ebpf-15/), see the [wiki](https://github.com/sched-ext/scx/wiki) for more. We're so confident in sched-ext that we're starting a Scheduler Contest for FOSDEM'25. Think you can craft the ultimate scheduler? A scheduler that does something interesting, helpful, or fun? Join our sched-ext contest and show us what you've got, with the chance of winning hand-crafted sched-ext swag!

## How to participate:
Submit your scheduler using sched-ext as a pull request to this repository, ensuring:

- It runs with a 6.12 Linux kernel.

- It's GPLv2-licensed

- It compiles and is understandable. We're programming language agnostic; just make sure to include a script so we can build and run it.

The [implementations.md](./submissions/implementations.md) document provides details on the submission format.

If you are planning to implement a scheduler in Rust, you can use this [template](https://github.com/arighi/scx_rust_scheduler) and follow these [steps](https://github.com/arighi/scx_rust_scheduler?tab=readme-ov-file#setting-up-a-virtual-environment-for-testing) to test it.

You can also submit a unique scheduling policy idea to [ideas.md](./submissions/ideas.md).

Try to surprise us...

## Deadlines & Announcement:

The submission deadline is **Sunday, 2 February, at 10:00 AM** (CET).

Winners will be announced during Andrea Righi's talk on the [Kernel](https://fosdem.org/2025/schedule/track/kernel/) track, "[Level Up Your Linux Gaming: How Sched-ext Can Save Your FPS](https://fosdem.org/2025/schedule/event/fosdem-2025-4618-level-up-your-linux-gaming-how-schedext-can-save-your-fps/)," from **12:30 to 13:10**.

## Prizes:

- **Best Scheduler**: A sched-ext shirt and a cup!
- **Best Idea**: A sched-ext shirt!

## Important:

To claim your prize, **you must be present during Andrea’s talk**. By participating, you agree to share your submission under GPL licensing and allow us to showcase it.

## Legal Note:

This contest is for fun! We, Andrea and Johannes, select the winners based on our personal preferences and our own definition of "best". All decisions are final, and we’re not liable beyond delivering the prizes to the winners. If you have any questions, feel free to create a GitHub issue.

There will be multiple talks at FOSDEM’25 on sched-ext:

- [Concurrency Testing using Custom Linux Schedulers](https://fosdem.org/2025/schedule/event/fosdem-2025-4489-concurrency-testing-using-custom-linux-schedulers/) (Saturday, 12:00, [Testing and Continuous Delivery](https://fosdem.org/2025/schedule/track/testing/) track)
- [Rust-ifying the Linux kernel scheduler (in user space)](https://fosdem.org/2025/schedule/event/fosdem-2025-4620-rust-ifying-the-linux-kernel-scheduler-in-user-space-/) (Saturday, 17:20, [Rust](https://fosdem.org/2025/schedule/track/rust/) track)
- [Writing a Minimal Scheduler with eBPF, sched_ext, and C](https://fosdem.org/2025/schedule/event/fosdem-2025-4458-writing-a-minimal-scheduler-with-ebpf-schedext-and-c/) (Saturday, 18:20, [eBPF](https://fosdem.org/2025/schedule/track/ebpf/) track)
- [Level up your Linux gaming: how sched_ext can save your fps](https://fosdem.org/2025/schedule/event/fosdem-2025-4618-level-up-your-linux-gaming-how-schedext-can-save-your-fps/) (Sunday, 12:30, [Kernel](https://fosdem.org/2025/schedule/track/kernel/) track)

Come by and get yourself a sched-ext sticker and valuable information on this fascinating topic.

In the meantime, you can learn about sched-ext from the resources listed in the [wiki](https://github.com/sched-ext/scx/wiki), which includes a basic tutorial, and the videos in the [sched-ext playlist](https://www.youtube.com/playlist?list=PLLLT4NxU7U1TnhgFH6k57iKjRu6CXJ3yB) on YouTube.
