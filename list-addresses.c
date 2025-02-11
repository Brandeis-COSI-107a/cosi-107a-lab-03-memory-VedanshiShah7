#include <stdio.h>

// Global uninitialized variable (BSS segment)
int global_uninitialized;
// Global initialized variable (Data segment)
int global_initialized = 42;

// Function definition
void sample_function() {}

int main() {
    // Local (stack) variable
    int stack_var;
    // String literal stored in the read-only data section (text or RO data segment)
    char *str = "Hello, World!";
    
    // Print the memory addresses of different segments
    printf("stack variable: 0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data: 0x%012lX\n", (unsigned long)&global_initialized);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&global_uninitialized);
    printf("main: 0x%012lX\n", (unsigned long)&main);
    printf("function: 0x%012lX\n", (unsigned long)&sample_function);

    return 0;
}
