# Thread Creation

When a program is started, the resulting process consists of a single thread, called the initial or main thread. The pthread_create() function creates a new thread.

`#include <pthread.h>`

`int pthread_create(pthread_t "thread, const pthread_attr_t *attr, void *(*start)(void*), void *arg);`

Returns o on success, or a positive error number on error

The new thread commences execution by calling the function identified by start with the argument arg (i.e., start(arg)). The thread that calls pthread_create() continues execution with the next statement that follows the call. The arg argument is declared as void *, *, meaning that you can pass a pointer to any type of object to the start function. Typically, arg points to a global or heap variable, but it can also be specified as NULL. If you need to pass multiple arguments to start, then arg can be specified as a pointer to a structure containing the arguments as separate fields. The return value of start is likewise of type void*, and it can be employed in the same way as the arg argument.

The thread argument points to a buffer of type pthread_t into which the unique identifier for this thread is copied before pthread_create() returns. This identifier can be used in later Pthreads calls to refer to the thread. The attr argument is a pointer to a pthread_attr_t object that specifies various attributes for the new thread. If attr is specified as NULL, then the thread is created with various default attributes.

After a call to pthread_create(), a program has no guarantees about which thread will next be scheduled to use the CPU.