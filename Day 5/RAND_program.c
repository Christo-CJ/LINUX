//? write a program to generate 5 rand number
#include<stdlib.h>  
void main()
{
  int a[5];
  int i;
  Srand(getpid()); // giving pid orr seed to rand
  for(i=0;i<5;i++)
    a[i]=rand()%101-50; // -50 to 50
    //a[i]=rand()%101-100; //100-200
    //a[i]=rand()%101;//0-100

  for(i=0;i<5;i++)
    printf("%d",a[i]);
printf("\n");
}
