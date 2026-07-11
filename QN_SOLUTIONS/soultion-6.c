// Even or Odd
#include <stdio.h>

void check_number();

int main()
{
     check_number();

     return 0;
}

void check_number()
{
     int num;
     printf("Enter the number: ");
     scanf("%i", &num);

     if (num % 2 == 0)
     {
          printf("The number is even.\n");
     }
     else
     {
          printf("The number is odd.\n");
     }
}
