#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Loop through command-line arguments (excluding the program name)
    for (int i = 1; i < argc; i++) {
        // Convert argument to an unsigned long integer, auto-detecting base
        unsigned long num = strtoul(argv[i], NULL, 0);
        // Extract the least significant byte (lowest 8 bits)
        unsigned int low_byte = num & 0xFF;
        // Print the argument index, extracted byte in hex and decimal format
        printf("%d 0x%02X %3d\n", i, low_byte, low_byte);
    }
    return 0;
}
