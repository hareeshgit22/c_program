// Write a program to check given number is divisible by 8.

#include <stdio.h>
void main()
{
int num;
while(1){
printf("Enter a number\n");
scanf("%d",&num);
if(((num>>3)<<3)==num)
	printf("The given number is divisible by 8\n");
else
	printf("The given number is not divisible by 8");
}
}

