# Exit(3) library function

```c
#include<stdlib.h>
void exit(int status) 
```

will cause normal process termination.

Any process can terminate in two ways
- Normal termination
- Abnormal termination

 The  normal termination again two ways normal successful termination and normal failure termination.  

 Exclusive chjld code  
 if(fork()==0)    //child
 {  
   
 }  
 if (work done successfully)
 exit(0);
 else
 exit(1);

 exit() function before calling -exit() it will perform three steps/work   

 - All function registered with atexit(3) and on exit(3) are called in the reverse order of their registration.  
 - All open iostream functions are flashed and closed.
 - Files created by temp files are removed.

   ## ATEXIT(3) library function

     Register a function to be called at normal process termination
   ```c
   #include<stdlib.h>
   int atexit(void(*function)(void));

   #include "header.h"
   void abc()
   {
   print("abc\n");
   }
   void main()
   {
   printf("Hello\n");
   atexit(abc);
   sleep(10);
   }
   ```

   ## EXIT(2) -systemcall

   void -exit(int status)

   #include<stdlib.h>

   -exit system call terminates the calling function or program immediately.

   exit(0)  normal successful termination
   exit(1)  normal failure termination
   -exit(0) normal succesful immediate termination
   -exit(1) normal failure immediate termination
