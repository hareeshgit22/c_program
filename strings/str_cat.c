//userdefined strcat function.
#include <stdio.h>
void my_strcat(char* p,char* q)
{
while(*p)
p++;
while(*q)
{
*p=*q;
p++;
q++;
}
}

void main()
{

char s[20] = "Qualcomm ";
char s1[10] = "Company";
my_strcat(s,s1);
printf("%s\n",s);

}
