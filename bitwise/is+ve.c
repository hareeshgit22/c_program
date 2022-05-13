// write a program to check given nmber is +ve or -ve// write a program to check given nmber is +ve or -ve.

#include <stdio.h>
void main()
{
int num;
while(1){
printf("Enter a number\n");
scanf("%d",&num);
if((num>>31&1)==0)
printf("The given number is +ve\n");
else
printf("The given number is -ve\n");
}
}

