# system calls

- system();
- perror();
- fork();

## system();  
library
```bash
# execute a shell command
#include<stdlib.h>
```

syntax
```bash
int system(const char * command);
```
#include<stdlib.h>  
void main()  
{  
   printf("Hello\n");   
   system("cal");       //print current month calender   
   system("ls");        //executes ls commands and print    
   printf("hai\n");  
}  


when a proces is calling a system function intyernally there are two more processes gets created.   
- sh
- the command you passed to the system

  bash -> a.out
               - hello
               - system -> sh  -> ls
                      ^             ^ 
                      |_____________|
    
