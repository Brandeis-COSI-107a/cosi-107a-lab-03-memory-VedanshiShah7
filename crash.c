#include <stdio.h>

void crash() {  // Change return type to void since it's not returning anything
    int *x = 0; // Null pointer

    printf("I'm going to print x!\n");
    printf("The value of *x is %d\n", *x); // Use %d instead of %ld for an int
}

int main(int argc, char **argv) {
    printf("We're going to crash!\n"); // Use printf instead of undefined print
    crash();
    printf("Back after the crash?\n");
}
