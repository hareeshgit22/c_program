//write a prgram to reverse a bits of given number.

#include <stdio.h>
void rev_bit(int* num)
{       
int m,n,i,j;
	for(i=0,j=31; i<j; i++,j--)
	{
	m=*num>>i&1;
	n=*num>>j&1;
		if(m!=n)
		{
		*num=*num^1<<i;
		*num=*num^1<<j;
		}
	}
}

void main()
{
int num,pos;
printf("Enter a number\n");
scanf("%d",&num);
rev_bit(&num);
for(pos=31; pos>=0; pos--)
{
printf("%d",num>>pos&1);

if(pos%8==0)
printf(" ");

}
}



