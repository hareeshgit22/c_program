//user defined strrev function.

#include <stdio.h>

void my_strrev(char* p)
{
char *q,temp;
q=p;
while(*q)
q++;
q--;
while(p<q)
{
temp=*p;
*p=*q;
*q=temp;
p++;
q--;
}

}
void main()
{
char s[10] = "Qualcomm";
printf("Before reversing a string: %s\n",s);
my_strrev(s);
printf("after reversing a string: %s\n",s);

}














