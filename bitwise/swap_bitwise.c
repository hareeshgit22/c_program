// Swapping of two variables using bitwise operator.

#include <stdio.h>
void main()
{
int i=10,j=20;
printf("Before swaping i=%d j=%d\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("After swaping i=%d j=%d\n",i,j);

}


