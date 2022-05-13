// Write a program to set a bit, clear a bit, toggle a bit.

#include <stdio.h>
void main()
{
int op,num,pos;
while(1){
printf("Enter a option 1)set a bit 2)clear a bit 3)toggle a bit\n");
scanf("%d",&op);
printf("enter a number\n");
scanf("%d",&num);
printf("enter a position\n");
scanf("%d",&pos);
switch(op)
{
case 1:num|=1<<pos;
	printf("num = %d\n",num);
	break;

case 2:num&=~(1<<pos);
	printf("num = %d\n",num);
	break;
case 3:num^=1<<pos;
	printf("num = %d\n",num);
	break;
default: printf("invalid choice");
}


}
}
