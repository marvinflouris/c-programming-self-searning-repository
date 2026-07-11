// largest of the three numbers
#include <stdio.h>

int main()
{

     double a, b, c;

     printf("Enter three numbers:\n");
     if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
     {
          printf("Invalid inputs!");
          return 1;
     }

     // Using the ternary operator
     double largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

     printf("The largest number is %.1f\n", largest);

     return 0;
}