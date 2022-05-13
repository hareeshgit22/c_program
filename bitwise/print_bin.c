//write a program to print a binary of given number.

#include <stdio.h>
void main()
{
int num,pos;
while(1){
printf("Enter a number\n");
scanf("%d",&num);
for(pos=31; pos>=0; pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
}
printf("\n");
}
}
