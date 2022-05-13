//write a program to print perfect sq from given range.

#include <stdio.h>
void main()
{
int num1,num2,i;
printf("Enter a range\n");
scanf("%d %d",&num1,&num2);
for(num1; num1<num2; num1++)
{
for(i=0; i<num1; i++)
{
 if(num1==i*i)
	printf("%d ",num1);

}
}
}
