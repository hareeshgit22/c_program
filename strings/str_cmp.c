//userdefined strcmp function.

#include <stdio.h>
int my_strcmp(char* p,char* q)
{
while(*p)
{
if (*p==*q)
{
p++;
q++;
}
else if(*p>*q)
return 1;
else
return -1;
}
return 0;
}

void main()
{
char s[10]="qualcomm";
char s1[10]="Qualcomm";
int m;
m=my_strcmp(s,s1);
if (m==0)
printf("strings are equal\n");
else if(m==1)
printf("string1 is greater than string2\n");
else
printf("string1 is lesser than string2\n");


}
