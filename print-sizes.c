#include <stdio.h>

int main() {
    // Declare a character array of size 200
    char char_array[200];

    // Declare integer and character pointers
    int *int_ptr;
    char *char_ptr;

    // Print the sizes of fundamental data types
    printf("size of char is %zu\n", sizeof(char));
    printf("size of short is %zu\n", sizeof(short));
    printf("size of int is %zu\n", sizeof(int));
    printf("size of long is %zu\n", sizeof(long));
    printf("size of long long is %zu\n", sizeof(long long));
    printf("size of float is %zu\n", sizeof(float));
    printf("size of double is %zu\n", sizeof(double));

    // Print the sizes of pointer types
    printf("size of char * is %zu\n", sizeof(char *));
    printf("size of int * is %zu\n", sizeof(int *));
    printf("size of long * is %zu\n", sizeof(long *));

    // Print the size of the character array
    printf("The size of my character array is %zu\n", sizeof(char_array));

    // Print the sizes of the declared pointers
    printf("The size of my character pointer is %zu\n", sizeof(char_ptr));
    printf("The size of my int pointer is %zu\n", sizeof(int_ptr));

    // Print the size of what the integer pointer points to
    printf("The size of what my integer pointer points at is %zu\n", sizeof(*int_ptr));

    return 0;
}
