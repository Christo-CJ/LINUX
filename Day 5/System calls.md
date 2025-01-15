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

bash creates a.out  
a.out  
- hello
- system
     - sh
     - ls

sh parent is a.out  
system is a blocking function untill complete its execution
  
ps -e | grep pts/terminal number

system code puts the process into waitstate untill the completion of command.
    
