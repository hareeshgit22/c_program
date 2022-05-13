#include <stdio.h>
// Swapping of two variables using Temp variables.
void swap(int*p,int*q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
//Swapping of two numbers without using temp variable.
void swap1(int*p,int*q)
{
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
}
void main()
{
int a=10,b=20;
printf("Before swapping a=%d b=%d\n",a,b);
swap1(&a,&b);
printf("After swapping a=%d b=%d\n",a,b);
}



