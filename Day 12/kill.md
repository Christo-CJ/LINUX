## KILL(2) 
Kill send signal to a process      

```c
#include<sys/types.h>
#include<signal.h>
int kill(pid_t pid,int sig);
```

```c
#include<header.h>
void main(int argc,char** argv)
{
if(argc!=3)
{
printf("usage ./a.out signum pid\n");
return;
}
kill(atoi(argv[2]),atoi(argv[1]));
perrot("kill");
}
```
using the signal either signal can be sent to other process or we can send to itself  

```
kill(getpif(),SIGNUM); 
```

## RAISE(3)

Raise - send signal to caller  
```
#include<signal.h>
int raise(int sig);
```

## PAUSE(2)

Pause-wait for a signal  
```
#include unistd.h
int pause(void);
```
cause the calling process to sleep until a signal is delivered that either terminates the process or cause the invocation of signal catching function.  

# SIGNAL(2)  
signal handling

```c
#include<signal.h>
typedef void(*sighandler_t)(int);
sighandler_t signal(int signum,sighandler_t handler);
```
handler can be  
- my_isr ->custom isr
- SIG_DEL
- SIG_IGN ->IGNOR

  ```c
  #include<header.h>
  void my_isr(int n)
  {
  printf("in isr pid=%d signum=%d,getpid(),n);
  }
  void main()
  {
  printf("In main pid=%d\n",getpid());
  signal(SIGINT,my_isr);  //replace default for SIGINT
  signal(SIGINT,SIGINT);  //ignores SIGINT
  printf("Hai\n");
  while(1);
  }
  ```

  1.signal function is not a blocking function
  2.signal function will not generate signal
  3.signal function modifies the signal table

  ``c
  #include<header.h>
  void my_isr(int n)
  {
  static int c;
  printf("In isr pid=%d signum=%d,getpid(),n);
  c++;
  if(c>2)
  {
  signal(SIGINT,SIGDEF);
  signal(SIGQUIT,SIGDEF);
  }
  }
  }
  void main()
  {
  printf("in main pid=%d\n",getpid());
  signal(SIGINT ,my_isr);
  signal(SIGQUIT,my_isr);
  while(1);
  }
  ```
  
