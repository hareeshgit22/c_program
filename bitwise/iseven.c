//write a program to check given number is even or odd.

#include <stdio.h>
void main()
{
int num;
while(1){
printf("enter a number\n");
scanf("%d",&num);
if((num>>0&1)==0)
printf("The given number is even\n");
else
printf("The given number is odd\n");
}

}

