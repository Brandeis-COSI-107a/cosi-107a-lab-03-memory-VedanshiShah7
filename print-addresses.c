#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Loop through command-line arguments (excluding the program name)
    for (int i = 1; i < argc; i++) {
        // Convert argument to an unsigned long integer, assuming base 10
        unsigned long num = strtoul(argv[i], NULL, 10);
        // Print the lower 48 bits of the number as a hexadecimal address
        printf("0x%012lX\n", num & 0xFFFFFFFFFFFF);  // Print 48-bit address in hex
    }
    return 0;
}
