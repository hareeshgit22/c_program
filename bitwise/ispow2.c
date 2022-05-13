//Write a program to check given number is power of 2 or not.

#include <stdio.h>
void main()
{
int num;
while(1){
printf("Enter a number\n");
scanf("%d",&num);
if((num&(num-1))==0)
printf("The given number is power of 2\n");
else
printf("The given number is not power of 2\n");
}
}
