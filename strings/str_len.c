//user defined strlen function
#include <stdio.h>

int my_strlen(char *p)
{
int count = 0;
while(*p)
{
count++;
p++;
}
return count;
}

void main()
{
int len;
char s[10]="qualcomm";
len=my_strlen(s);
printf("string length= %d\n",len);

}









