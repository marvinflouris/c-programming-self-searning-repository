// Factorial of a Number
#include <stdio.h>

long long factorial(int);

int main()
{
     // >> Testing function <<
     // long long x = factorial(20);
     // printf("%lld", x);

     // THE RECURSIVE METHOD
     int number;
     double fact; /*I used double because it fits a much larger  */

     printf("Enter a number: ");
     scanf("%d", &number);

     // Numbers 1 and 0 have 1 as their factorial
     if (number == 1 || number == 0)
     {
          fact = 1.0;
          printf("%d! (factorial) is %.1f\n", number, fact);
          return 0;
     }
     else if (number < 0)
     {
          printf("No factorials for negative values!\n");
          return 1;
     }

     // The factorial Loop
     // let the factorial, fact, be the number
     fact = number;
     for (int n = number; n > 1; n--)
     {
          fact = fact * (n - 1);
     }

     printf("%d! (factorial) is %.1f\n", number, fact);

     return 0;
}

// Second Approach
long long factorial(int num)
{
     // THE ITERATIVE METHOD
     /************************************************************************************
      *I think this function is limited to factorial values that do not exceed the *******
      *64-bit values**********************************************************************
      *It should favor from 1! to around 19! am sure! Above this wait for your bad values*
      *DISCLAIMER: I have not tested the error point/value yet, so i have not confirmed***
      *where this function stops working at clearly***************************************
      ************************************************************************************
      */

     long long fact = 1;
     // Principle: Iterate the multiplication of counting numbers
     for (int i = 1; i <= num; i++)
     {
          /*initialize 'fact' to value at 'i', then multiply 'fact' by 'i' for each
           iteration through each iteration */
          fact *= i;
     }
     return fact;
}