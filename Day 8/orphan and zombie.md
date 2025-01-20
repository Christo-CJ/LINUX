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
It is in defunctional state(no functionality)
When the child completes before parent the kernel deals with this situation by turning the child into zombie.  

The reason why zombie process is creadted that parent should called the exit status of its child,once parent gets the exit status of child process manager removes the child from zombie status.  

**Q**
How the child needs to sned an exit status to its parent?  
Using exit() function or -exit()  
How parent need to collect the exit status  
parent needs to use wait()/waitpid()   

