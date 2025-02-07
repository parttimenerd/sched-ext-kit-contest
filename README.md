# Sched-ext Scheduler Contest KIT'25

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

The submission deadline is **Sunday, 9 March, at 23:59** (CET).

Winners will be announced in the OS course ILIAS the following day.

## Prizes:

- **Best Scheduler**: A sched-ext shirt and a cup!
- **Best Idea**: A sched-ext shirt!

## Important:

To claim your prize, **you must be part of the ILIAS course and respond till end of March**. By participating, you agree to share your submission under GPL licensing and allow us to showcase it.

## Legal Note:

This contest is for fun! We, Lukas Werling and Johannes Bechberger, select the winners based on our personal preferences and our own definition of "best". All decisions are final, and we’re not liable beyond delivering the prizes to the winners. If you have any questions, feel free to create a GitHub issue.

## Resources
You can learn about sched-ext from the resources listed in the [wiki](https://github.com/sched-ext/scx/wiki), which includes a basic tutorial, and the videos in the [sched-ext playlist](https://www.youtube.com/playlist?list=PLLLT4NxU7U1TnhgFH6k57iKjRu6CXJ3yB) on YouTube.

The following repositories can be used to start playing around:
- C code: https://github.com/parttimenerd/minimal-scheduler
- Rust code: https://github.com/arighi/scx_rust_scheduler
