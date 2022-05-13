//write a program of nibble(4-bit) swapping in byte.

#include <stdio.h>
void main()
{
int num =0x1234;
num=((num&0x0f)<<4)|((num&0xf0)>>4)|((num&0x0f00)<<4)|((num&0xf000)>>4);
printf("%x\n",num);

}



