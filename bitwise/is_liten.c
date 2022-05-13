// write a program for system is little endian or big endian.
#include <stdio.h>
void main()
{
char x=0x1;
if(x&1==1)
printf("Little endian\n");
else
printf("Big endian\n");
}










