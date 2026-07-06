#include <stdio.h>

int sum(int *a, int *b); // initializing the function sum() with two pointer parameters

int sum(int *a, int *b) // defining the function sum() with two pointer parameters
{
     int c;
     c = *a + *b;
     return c;
}

int main()
{
     int num1 = 0, num2 = 0, total; // initializing the variables num1, num2 and total

     // initializing the pointer variable pointer1 and pointer2 to point to the address of num1 and num2 respectively
     int *pointer2 = &num2;
     int *pointer1 = &num1;

     printf("\nInput: Enter two numbers A and B: ");
     scanf("%d %d", pointer1, pointer2);

     total = sum(pointer1, pointer2);
     printf("\nOutput: Sum of A and B is: %d\n", total);
     return 0;
}