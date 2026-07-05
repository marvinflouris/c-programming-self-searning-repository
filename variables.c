#include <stdio.h>
// this is a comment

// this is a variable declaration
int age;

// this is a variable declaration and initialization
float gpa = 3.9;

char grade = 'A';    // this is a character
char name[] = "Bro"; // this is a string
double c = 3.14159;  // this is a double

int main() {
  age = 25;
  printf("%d\n", age);
  printf("%f\n", gpa);
  printf("%c\n", grade);
  printf("%s\n", name);
  printf("%lf\n", c);
  return 0;
}