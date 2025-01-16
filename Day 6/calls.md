1. How many process are created?  
2. How many command executed?
3. Are they executed sequentially/concurrently   

bash         
a.out
 - hello
 - system  ->sh  ->ls  
 - system  ->sh  ->cal
 - hw

1. 5 process excluding bash   
2. Two ls and cal
3. sequntially
  
## perror(3)

perror - prints system error messages

```bash
#include<stdio.h>
void perror(const char *s);
```

```bash
#include"header.h"
void main()
{
FILE *fp;
fp=fopen("DATA",'r');
if(fp==0)
{
perror("fopen");
return;
}
printf("file exists\n");
}


How perror knows the reason of the previous function call failure?
```bash
$ man errno.
```

The errno.h header file define the integer variable errno which is set by systemcall and some library functions in the event of an error to indicate what went wrong.
All library function can't set errno.

## fork (2)

creates a child process  
VFork()  child process executes always fisrt

#include<sys/types.h>
#include<unistd.h>
pid_t fork(void);

Fork creates a new process by duplicating the calling process.The new process is reforced to as the child process .The calling process is refered as a point process.

#include "header.h"
void main()
{
printf("Hello pid=%d\n",getpid());
fork();
printf("Hai pid=%d",getpid());
while(1)
}

bash         child/duplicate of a.out
a.out        
- 1 printf  
- 2 fork    -> hai  pid
- 3 hai
- 4 while(1)

  Here 3 and 4 executed by both parent and child concurrently.

  output
  Hello pid =3037
  hi pid =3037  executed by parent
  hi pid =3038  executed by child

  void main()
  {
  1.printf("hello pid =%d\n",getpid());
  2.fork();
  3.fork();
  4.printf("hai");
  5.while(1);
  }


  bash
  a.out y
  - 1
  - 2 -> y+1
          - 1
          - 2
          - 3  -> y+2
                  - 1
                  - 2
                  - 3
                  - 4
                  - 5
          -> 4
          - 5
  - 3  -> y+3
          - 1
          - 2
          - 3
          - 4
          - 5       
  -> 4
  - 5


## significance of '\n'

#include <stdio.h>   
void main()   
{  
printf("hello"); //here hello isnot printed but instruction executed
while(1); //and stored in stdout buffer
}

It will only go out from buffer if only

1. '\n'
2. fflush
3. sf()
4. buffer full
5. Normal termination

   whenever we are writing the system programming using the c language provide \n for every printf.

   ## Fork return value

   On success pid of child process is returned in the parent and zero is returned in the child
   On failure -1 is returned in the parent number child process is created errno is set appropriately

   #include <header.h>
   void main()
   {
   int r;
   printf("hello %d\n",getpid(),r);
   while(1);
   }
   output
   Hello 3238
   hi 3238 r=3239
   hi 3239 r=0
   
