#include <stdio.h>

int global_uninitialized;
int global_initialized = 42;

void sample_function() {}

int main() {
    int stack_var;
    char *str = "Hello, World!";
    
    printf("stack variable: 0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data: 0x%012lX\n", (unsigned long)&global_initialized);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&global_uninitialized);
    printf("main: 0x%012lX\n", (unsigned long)&main);
    printf("function: 0x%012lX\n", (unsigned long)&sample_function);

    return 0;
}
