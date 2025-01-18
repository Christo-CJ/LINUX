# Fork Return Value

*On success pid of child process is returned in the parent and zero is returned in the child.*  
*On failure -1 is retruned in the parent no child process is created errno is set appropriately*  

```c
#include<header.h>
void main()
{
int r;
printf("hello %d\n",getpid());
r=fork();
printf("hi %d r=%d \n",getpid(),r);
while(1);
}
```
```
#output
hello 3238
hi 3238 r=3239
hi 3239 r=0
```

```c
#include"header.h"
void main()
{
int r;
printf("hello\n");
r=fork();
if(r==0)
printf("child process\n") 
else
printf("parent process\n")
while(1);
}
```

The body of if() is executed by child(child exclusive)   
The body of else is executed by parent(parent exclusive)  
After the if ellse hwile(1) is concurrently executed by both parent and child(common)


r=fork();  
if(r) // parent since r holds childs pid  
{}  
else  // child  


if(fork()==0)   //child exclusive  
{}  
else  //parent exclusive  
{}  

//common


if(fork()) //parent  
{}  
else  //child  
{}

**Q** .   
```c
#include<header.h>
void main()
{
printf("Hello\n");
if(fork()==0)
system("ls");
else
system("cal");
}

```
1.How many process involved here?  
2.How many commands gets executed?  
3.Are they executed concurrently or sequentially?    

1. 6 excluding bash
2. Two ls and cal
3. concurrently,since both are in diff process if two command in single process sequential. 


