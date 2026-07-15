// Decimal to Binary
#include <stdio.h>

int main()
{
    // store a number
    int n, original_n;
    printf("Enter any decimal number: ");
    scanf("%d", &n);

    // Save the original value for the final print statement
    original_n = n;

    if (n == 0 || n == 1)
    {
        printf("%d in binary form it is %d\n", n, n);
        return 0;
    }

    int reversed_list[32]; // Increased size to safely handle 32-bit integers
    int i = 0;
    int remainder;

    // FIX: Changed || to && so the loop can actually terminate
    while (n != 0 && n != 1)
    {
        remainder = n % 2;
        reversed_list[i] = remainder;

        int quotient = n / 2;

        if (quotient == 0 || quotient == 1)
        {
            reversed_list[i + 1] = quotient;
            i++; // Increment i so it points to the last valid index
            break;
        }
        else
        {
            n = quotient;
        }
        i += 1;
    }

    // FIX: Uses original_n instead of the destroyed n variable
    printf("%d's Binary value is ", original_n);

    // FIX: Standard reverse loop structure using a tracking variable 'x'
    for (int x = i; x >= 0; x--)
    {
        printf("%d", reversed_list[x]);
    }
    printf("\n");

    return 0;
}
