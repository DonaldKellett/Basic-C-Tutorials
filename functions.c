#include <stdio.h>
// Functions in C
// Functions in C can receive a fixed or variable amount of arguments
// Functions can return either ONE or NO values
// In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. To do that, we must use pointers, which are taught later on.
// e.g.
int foo(int bar) {
    /* do something */
    return bar * 2;
}

int main() {
    foo(1);
}

// In C, functions MUST be defined BEFORE they are used in the actual code.  However, you can first declare a function without defining it
/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));
}

int foo(int bar) {
    return bar + 1;
}

// Functions with NO return value can also be created with keyword "void", e.g.

void moo() {
    /* do something and don't return a value */
}

int main() {
    moo();
}

/* Actual Exercise */

/* function declaration */
int print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
int print_big(int number) {
    if (number > 10) {
    	printf("%d is big\n", number);
    }
}
