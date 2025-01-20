The `Orphan or zombie process` these process are related with child process.  
The lifetime of parent process and child process ususally not the same.  
Parent execution is completed and child is still executing here the child becomes Orphan.  
The Orphaned child is adopted by init,after a childs parent terminates a call to get ppid will return value 1.

```c
#include"header.h"
void main()
{
if(fork()==0)
{
printf("In child pid=%d ppid=%d\n",getpid(),getppid());
sleep(20);
printf("In child pid=%d ppid=%d\n",getpid(),getppid());
}
else
{
printf("In parent pid=%d,getpid());
sleep(10);
printf("parent ecec ended\n");
}
}
```

Child execution is completed parent is still executing then child becomes zombie.
A Zombie is a dead process which does not have any pending instructions to execute.
