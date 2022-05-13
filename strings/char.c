//print string character by character.
#include <stdio.h>
void print_char(const char* p)
{
while(*p){
printf("%c ",*p);
p++;
}
}

void main()
{
char s[10]="Qualcomm";
print_char(s);
printf("\n");
}

