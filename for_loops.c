#include <stdio.h>
// For Loops in C
// Syntax:
/*
for (initial_value; condition; increment;) {
  // Do something
}
*/
// NOTE: If you use a variable in your "for" loop (e.g. i = 0; i < 10; i++ in your condition part of the for loop), you MUST declare it first (i.e. int i;)
// e.g.

int i;
for (i = 0; i < 10; i++) {
    printf("%d\n", i);
}

// Array Syntax
// In C, if you decide to populate an array as you define it, you MUST use CURLY braces "{}", NOT square brackets

int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
int i;

for (i = 0; i < 10; i++) {
    sum += array[i];
}

/* sum now contains a[0] + a[1] + ... + a[9] */
printf("Sum of the array is %d\n", sum);

/* Actual Exercise */

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i;

  /* calculate the factorial using a for loop  here*/
  for (i = 0; i < 10; i++) {
  	factorial *= array[i];
  }

  printf("10! is %d.\n", factorial);
}
