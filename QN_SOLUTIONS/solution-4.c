// Swap Two Variables
#include <stdio.h>

void swapper(int *a, int *b);

int main()
{
     int num1 = 1;
     int num2 = 2;

     swapper(&num1, &num2);

     printf("new num1 is: %i , and new num2 is : %i\n", num1, num2);

     return 0;
}

void swapper(int *a, int *b)
{
     int c;

     c = *a;  // Store the value pointed to by a in c
     *a = *b; // Overwrite value at address pointed to by a with value pointed to by b
     *b = c;  // Overwrite value at address pointed to by b with value stored in c
}