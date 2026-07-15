// Simple calculator
#include <stdio.h>

int main()
{
  char operator = '0';
  int operator_1, operator_2, result;

  printf("Enter an operator: ");
  scanf("%c", &operator);

  // OPERAND CHECK LOGIC
  // if (operator != '+' || operator != '-' || operator != '*' || operator != '/')
  // {
  //   printf("Bad input! Either + - / *\n");
  //   return 1;
  // }

  printf("Enter first operand: ");
  scanf("%d", &operator_1);
  printf("Enter second operand: ");
  scanf("%d", &operator_2);

  switch (operator)
  {
  case '+':
    result = operator_1 + operator_2;
    break;
  case '-':
    result = operator_1 - operator_2;
    break;
  case '*':
    result = operator_1 * operator_2;
    break;
  case '/':
    if ((operator_1 || operator_2) == 0)
    {
      printf("Invalid operand! Can't be a zero in division.\n");
      return 2;
    }
    else
    {
      result = operator_1 / operator_2;
      break;
    }
  default:
    result = 0;
  }

  printf("Result: %d \n", result);
  return 0;
}