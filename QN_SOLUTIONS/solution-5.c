// Compound Interest
#include <stdio.h>
#include <math.h>

float compound_interest_of(int, int, float);

int main()
{

     int p;
     int t;
     float r;
     float ci;

     puts("Enter the Principle: ");
     scanf("%i", &p);
     puts("Enter the time: ");
     scanf("%i", &t);
     puts("Enter the rate (as a decimal): ");
     scanf("%f", &r);

     ci = compound_interest_of(p, t, r);

     printf("The compound interest is %.2f\n", ci);

     return 0;
}

float compound_interest_of(int principle, int time, float rate)
{
     // Calculates compound interest given time interval of compounding at given time range, n is 1
     // rate must be given as a decimal
     int n = 1;
     float amount;
     float compound_int;

     double part_1 = (double)(1 + rate / n);

     double part_2 = (double)(n * time);

     amount = principle * pow(part_1, part_2);

     compound_int = amount - principle;

     return compound_int;
}