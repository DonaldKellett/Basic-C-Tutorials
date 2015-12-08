#include <stdio.h> // Don't forget to include header file!
// C Data Types
// 1. Integers (positive and/or negative) - denoted by keywords "char", "int", "short", "long" or "long long"
// 2. Unsigned Integers (only takes +ve values) - denoted by keyword "unsigned" followed by another keyword denoting an integer (e.g. "unsigned int" or "unsigned long long")
// 3. Floats (Decimal Numbers) - denoted by keywords "float" and "double"
// 4. Structures
// NOTE: The different keywords for integers behave differently, e.g. a "char" integer can only take values between -128 to 127 while a "long" integer can take values up to millions
// C does NOT have Boolean values.  They have to be defined, like so:
#define BOOL char
#define FALSE 0
#define TRUE 1

// Defining Integer Variables
int foo; // Variable declared but not defined - we do not know its values
int bar = 1; // The variable "bar" has been assigned the value "1" (type INT)

// Doing Math with C
int a = 0, b = 1, c = 2, d = 3, e = 4; // Defining multiple variables at once
a = b - c + d * e; // Assign "a" a new value
printf("%d", a); /* Prints 1 - 2 + 3 * 4 = 11 */

/* Actual Exercise */

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;
  sum = a + b + c;

  /* Your code goes here */

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}
