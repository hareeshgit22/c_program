//user defined strchr function.

#include <stdio.h>

char* my_strchr(char* p,char ch)
{

while(*p)
{
if(*p==ch)
return p;
p++;

}
return 0;
}

void main()
{

char s[10]="qualcomm";
char *p, ch='a';
p=my_strchr(s,ch);

if(p==0)
printf("character not found\n");
else
printf("character is present @%p\n",p);

}









