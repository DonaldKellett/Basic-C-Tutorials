#include <stdio.h>
// While Loops in C
// Syntax:
/*
while (condition) {
  // Do something
}
*/
// e.g.
int n = 0;
while (n < 10) {
    n++;
}
// Loop directives
// 2 types of loop directives: ```break``` and ```continue```
// This allows you to halt loops even if the loop itself is an infinite loop
// e.g.
int n = 0;
while (1) {
    n++;
    if (n == 10) {
        break;
    }
}
// The continue directive skips to the next value of the iteration of the loop - it is useful for things such as skipping odd and even numbers in a loop etc.
int n = 0;
while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}


/* Actual Exercise */

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        /* your code goes here */
        if (array[i] < 5) {
        	i++;
            continue;
        }
        if (array[i] > 10) {
        	break;
        }
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}
