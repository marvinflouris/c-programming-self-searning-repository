// largest of the three numbers
#include <stdio.h>

void greatest_of_three(int, int, int);

int main()
{
     int a = 0, b = 0, c = 0;

     printf("Enter the three numbers in the order _,_,_ \n ");

     // check input validity
     if (scanf("%i %i %i", &a, &b, &c) != 3)
     {
          printf("Invalid input!\n");
          return 1;
     }

     greatest_of_three(a, b, c);

     return 0;
}

void greatest_of_three(int num1, int num2, int num3)
{

     if (num1 == num2 || num1 == num3 || num3 == num2)
     {
          printf("Numbers can not be equal!\n");
          return;
     }

     int great_one = num1;

     if (num2 > num1)
     {
          // make num2 greatone
          great_one = num2;
     }
     else if (num3 > num1)
     {
          // make num3 the greatone
          great_one = num3;
     }

     printf("The greatest is %i \n", great_one);
}
