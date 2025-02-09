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
- C code: https://github.com/parttimenerd/minimal-scheduler (blog post at [mostlynerdless.de](https://mostlynerdless.de/blog/2024/10/25/a-minimal-scheduler-with-ebpf-sched_ext-and-c/)
- Rust code: https://github.com/arighi/scx_rust_scheduler

Other things referenced in the lecture
- [Real Life Lottery Scheduling](https://mostlynerdless.de/blog/2013/12/08/real-life-practice-in-lottery-scheduling/)
- David Vernet's talk on Sched-ext: [Slides](https://archives.kernel-recipes.org/wp-content/uploads/2025/01/Sched_Ext.pdf), [Recording](https://www.youtube.com/watch?v=8kAcnNVSAdI), [Recording of additional talk](https://www.youtube.com/watch?v=skCBvHVrVhc), [Podcast Interview](https://www.youtube.com/watch?v=Ta0imAIz31M)
- [Sched-ext patch](https://lwn.net/Articles/978911/)
- Andrea Righi's talk: [Recording of previous talk](https://www.youtube.com/watch?v=jsLjg9tGuVI&t=9s), [Slides](https://fosdem.org/2025/events/attachments/fosdem-2025-4618-level-up-your-linux-gaming-how-schedext-can-save-your-fps/slides/237450/Level_up_nKtb5A3.pdf)
- [Scheduler that emits sound](https://github.com/parttimenerd/sound-of-scheduling)
- Erratic scheduler: [Code](https://github.com/parttimenerd/concurrency-fuzz-scheduler), [LWN article](https://lwn.net/SubscriberLink/1007689/922423e440f5e68a/), [Recording](https://fosdem.org/2025/schedule/event/fosdem-2025-4489-concurrency-testing-using-custom-linux-schedulers/)


Sample Applications
- [slowroads.io](https://slowroads.io)
- [Aquarium](https://webglsamples.org/aquarium/aquarium.html)


