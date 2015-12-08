#include <stdio.h> // Header
// C Arrays
// Arrays are variables that can hold more than one value
// Use the usual keywords for an array (e.g. int)
int numbers[10]; // Defines an array of 10 numbers
// Arrays are indexed from 0 upwards (as always in programming languages)
// Note that in the code above the array is defined, but the individual items are not defined yet.
numbers[0] = 0;
numbers[1] = 2;
numbers[2] = 4;
numbers[3] = 6;
numbers[4] = 8;
numbers[5] = 10;
numbers[6] = 12;
numbers[7] = 14;
numbers[8] = 16;
numbers[9] = 18;

/* Print 5th number in array (index 4) */
printf("The 5th number in my 'numbers' array is: %d", numbers[4]);
// Note that arrays in C can only hold ONE TYPE of value (e.g. ALL just integers)

/* Actual Exercise */


int main() {
  /* TODO: define the grades variable here */
  int average;
  int grades[3]; // "grades" is an array of 3 values

  grades[0] = 80;
  grades[1] = 85;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}
