#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        unsigned long num = strtoul(argv[i], NULL, 0);
        unsigned int low_byte = num & 0xFF;
        printf("%d 0x%02X %3d\n", i, low_byte, low_byte);
    }
    return 0;
}
