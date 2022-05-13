// write a program to check given number is armstrong.

#include <stdio.h>
void main()
{
int num1,num2,temp,sum=0,rem;
printf("Enter a range");
scanf("%d %d ",&num1,&num2);
for(num1; num1<num2; num1++)
{
temp = num1;
while(num1>0)
{
 rem=num1%10;
 sum+=(rem*rem*rem);
 num1=num1/10;
}
if(sum==temp)
printf("%d ",num1);
}
}
