#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        unsigned long num = strtoul(argv[i], NULL, 10);
        printf("0x%012lX\n", num & 0xFFFFFFFFFFFF);  // Print 48-bit address in hex
    }
    return 0;
}
