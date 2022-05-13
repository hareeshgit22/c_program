//write a program to convert upper case to lower case vice verse.

#include <stdio.h>
void main()
{
char ch;
while(1){
printf("Enter the character\n");
scanf("%c",&ch);
ch^=1<<5;
printf("%c\n",ch);
}
}
