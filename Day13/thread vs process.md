# Threads v/s Processes

## Advantages of a multithreaded approach are given below:

1) Sharing data between threads is easy. By contrast, sharing data between processes requires more work (e.g., creating a shared memory segment or using a pipe).

2) Thread creation is faster than process creation; context-switch time may be lower for threads than for processes.

## Using threads can have some disadvantages compared to using processes:

1) When programming with threads, you need to ensure that the functions you call are thread-safe or are called in a thread-safe manner.

2) A bug in one thread (e.g., modifying memory via an incorrect pointer) can damage all of the threads in the process, since they share the same address space and other attributes. By contrast, processes are more isolated from one another.

3) Each thread is competing for use of the finite virtual address space of the host process. In particular, each thread's stack and thread-specific data (or thread local storage) consumes a part of the process virtual address space, which is consequently unavailable for other threads.