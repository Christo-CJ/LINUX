# WAIT(2) -system call  
waits for process to change state  

```bash
#include<sys/types.h>
#include<sys/wait.h>
```

```bash
pid_t wait(int *wstatus);
pid_t waitpid(pid_t pid,int *wstatus,int options);
```

## monitoring the child process/status

We need to use wait systemcall in parent process.  
Wait is blocking function it will block the parent execution till the child terminates.  
Upon successful waiting the wait systemcall returns the child id upon failure returns -1.  
If we uses wait in parent two problem can be solved  
- child is removed from `zombie`
- child never becomes an `Orphan`
