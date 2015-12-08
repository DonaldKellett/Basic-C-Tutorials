#include <stdio.h>
// C Strings
// Strings in C are actually arrays of characters

// Defining a read-only string (using char keyword)
char * name = "John Smith";

// Defining a string that can be manipulated
char name[] = "John Smith"; // Leaving the square brackets empty tells C to calculate the size of the array automatically.

// Another method of defining a string
// e.g. The string "Jane Smith" is exactly 10 characters long but to define it using this method requires adding exactly 1 to the string length.
char name2[11] = "Jane Smith";
// This is because in C, there is actually an extra character at the end of a string (called the string termination character).  Its value is equal to 0.

// String Formatting with printf()
// The printf() command can be used to format a string together with other strings, like so:
char * food = "Ice cream";
int time = 3;
printf("%s will expire in %d days.\n", food, time);

// String Comparison
// The function strncmp() compares between two strings.  It returns 0 if the two strings are equal.
// Arguments: strncmp(first_string, second_string, max_comparison_length)

char * person = "John";

if (strncmp(person, "John", 4) == 0) {
  printf("Hello, John!\n");
} else {
  printf("Sorry, you are not John.  Go away.\n");
}

/* Actual Exercise */

int main() {
  char * first_name = "John";
  char last_name[4] = "Doe";
  char name[9];

  /* testing code */
  if (strncmp(first_name, "John") != 0) return 1;
  if (strncmp(last_name, "Doe") != 0) return 1;

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }

  return 0;
}
