## WIFEXITED(status)
This macro retruns true if the child process exited normally.  

## WEXITSTATUS(status)
This macro returns the exit status of child.

## WIFSIGNALED(status)
This macro returns true if the child process was killed by a signal.  

## WTERMSIG(status)
This macro returns the number of signal that caused the process to terminate.


```c
{
int r,s;
printf(In parent pid=%d\n",getpid());
r=wait(&s);
if(WIFEXITED(s))
printf("child terminated normally %d\n",WEXITSTATUS(s))
else if(WIFSIGNALED(s))
printf("Child terminated abnormally %d\n",WTERMSIG());
}

```
```
#output
On normal termination
child terminated normally 1
On abnormal with kill -9
child termintaed abnormally -9
```

**Q**  
If parent is having multiple child how to use wait syatem call so that none of the child should become Orphan/Zombie?  
*ans* 
- r=wait(&s);  
  r=wait(&s);
  r=wait(&s);
- while(r=wait(&s))!=-1)
  {
  }


  ## Disadvantages of WAIT system call

  We cannot make a parent to wait for particular child.
  Using wait system call i cannot make the parent to wait for child but suspended child gets resumed.


  **Q**
  How the child knows the parent id?
  In child use getppid()
  How the parent knows the child id?
  fork() system call return type 
