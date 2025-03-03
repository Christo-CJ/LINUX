# Pthreads

## The Pthreads API

In the late 1980s and early 1990s, several different threading APIs existed. In 1995, POSIX.Ic standardized the POSIX threads API. The Pthreads library is a POSIX C API thread library that has standardized functions for using threads across different platforms.


## Basic Pthreads Library Calls

1) Creates a new thread, initializes its attributes, and makes it runnable.
  
`int pthread_create(pthread_t *thread, cons const pthread_attr_t *attr,void*(*start_routine) (void), void *arg);`
  
2) Terminates the calling thread.  

`void pthread_exit(void *value_ptr);`
  
3) Returns the calling thread's identifier.
  
`pthread_t pthread_self()` 

4) The pthread_join subroutine blocks the calling thread until the thread specified in the call terminates. The target thread's termination status is returned in the status parameter.  
  
`int pthread_join(pthread_t thread, void **value_ptr);`
    
5) Detaches the specified thread from the calling thread.     
`int pthread_detach(pthread_t thread, void **value_ptr);  `

6) Initializes a mutex and sets its attributes.
  
`int pthread_mutex_init (pthread_mutex_t *mutex, pthread_mutexattr_t *attr);`

7) Deletes a mutex.
    
`int pthread_mutex_destroy(pthread_mutex_t *mutex);`
  
8) Locks a mutex.
  
`int pthread_mutex_lock (pthread_mutex_t *mutex);`
  
9) Tries to lock a MuTex.
  
`int pthread_mutex_trylock(pthread_mutex_t *mutex);`
  
10) Unlocks a MuTex.
  
`int pthread_mutex_unlock (pthread_mutex_t *mutex); ` 