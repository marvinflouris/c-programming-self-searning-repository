#include <stdio.h>

int main()
{
     int a;
     int *p = &a;
     scanf("%i", p);
     printf("The number is %i\n", a);
     return 0;
}