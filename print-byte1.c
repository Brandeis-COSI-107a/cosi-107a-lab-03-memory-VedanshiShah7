#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Loop through command-line arguments (starting from index 1 to skip program name)
    for (int i = 1; i < argc; i++) {
        // Convert the argument string to an unsigned long integer, automatically detecting the base (0 means auto-detect)
        unsigned long num = strtoul(argv[i], NULL, 0);
        // Extract the second least significant byte (byte at position 1, zero-based index)
        unsigned int byte1 = (num >> 8) & 0xFF;
        // Print the extracted byte in hexadecimal and decimal formats
        printf("0x%02X %3d\n", byte1, byte1);
    }
    return 0;
}
