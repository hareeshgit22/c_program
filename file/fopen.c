#include<stdio.h>
void main()
{
FILE *fp=fopen("shell cd c_program/strings/str_len.c","r");
if (fp)
printf("file is present");
else
printf("file is not present");
}
