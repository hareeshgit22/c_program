//user defined strcpy function.

#include <stdio.h>
void my_strcpy(const char* src,char* des)
{
while(*src)
{
*des=*src;
src++;
des++;
}
}

void main()
{

char src[10]="Qualcomm";
char des[10];
my_strcpy(src,des);
printf("source string :%s\n",src);
printf("destination string :%s\n",des);

}







