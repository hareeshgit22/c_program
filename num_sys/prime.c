//write a program to print prime number from given range.

#include <stdio.h>
void main()
{
int num1,num2,i;
printf("Enter a range\n");
scanf("%d %d",&num1,&num2);
	for(num1; num1<num2; num1++)
	{
		for(i=2; i<num1; i++)
		{	
			if(num1%i==0)
			break;
		}
	if(num1==i)
	printf("%d ",num1);
	}

}
