Wait system call can be used in two ways    
- wait(&s);  here parent is waiting for child and also collecting status
- wait(0); waiting for child termination gut intrested  to collect the status.

-> Waitpid(y+2,&s,0);  
In this case parent is waiting for y+2 to terminate and also collecting the status information.  

-> waitpid(y+2,0,0);  
Parent is waiting y+2 to terminate but not interested to collect the status.

wait(&s)==waipid(-1,&s,0);  
waiting for the child which terminates first.  

waitpid(1,0,0) waiting for the child which terminates first and collect information.  


# Option argument in waitpid()

- WUNTRACED
- WCONTINUED
- WNOHANG

  ## WUNTRACED

  Also returns information when child is stopped by signal.

  ## WCONTINUED

  Also returns information about stoped children that have beed resumed by signal (18)
  waitpid(y+2,&s,0);  Terminate - normal or abnormal  
  waitpid(y+2,&s,WUNTRACED);  normal abnormal,suspend  
  waitpid(y+2,&s,WUNTRACED|WCONTINUED); normal abnormal,suspend,resumed    

  ## WNOHANG

   while(1)
  {
  waitpid(y+2,&s,0);


  }

  blocks the process

  while(1)
  {
  waitpid(y+2,&s<WNOHANG)

  }

  this waitpid() wont block if child not terminated.

  **waitpid return value**
  waitpid( , ,WNOHANG);
  fail -> 0 still havent complete (child)  pid on success return 0.

  ## Exec family of function

```c
#include<unistd.h>
int execl(const char *path,const char * arg ,..../*(char*).Null*/);
int execlp(const char *file,const char *arg,..../*(char*).Null*/);
int execlv(const char *path,char *const argv[]);
int execld(const char *file,char *const argv[]);
```

The exec family of function replaces the current process image with new process image.   
The function described in this man page are from end.

**for Execve(2) -> system calls**
Without waiting the new process if you want to run new process on th top of old process use `exec`.  

```c
main()
{
printf("Hello\n");
system(ls);
printf("hai\n");
}
```
bash then y then sh and then ls

```c
main()
{
printf("hello\n");
execl(/bin/ls,"ls",Null);
printf("hai\n");
}
```
bash y the exec then y+1 over writes the y to execute.  


```c
main()
{
if(fork()==0)
system("ls");
else
system("pwd");
}
```
bash y y+1 sh ls    
sh pwd   
number of process is 6    
number of command 2  
concurrent  


```c
main()
{
if(fork()==0)
execl("/bin/ls","ls",NULL);
else
execl("/bin/pwd","pwd",NULL);
}
```

number of process 2  
commands 2  
concurrent  

  
