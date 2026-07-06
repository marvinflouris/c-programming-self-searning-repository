#include <stdio.h>

char moo = 'm';
int noo = 1;

int main()
{

  printf("This is the char-value: %c\n", moo);
  printf("This is the char-value: %d\n", noo);

  printf("This is the char-ref: %p\n", &moo);
  printf("This is the char-ref: %p\n", &noo);

  printf("This is the value moo: %c and its address-ref is: %p", moo, &moo);

  return 0;
}
