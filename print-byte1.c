#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        uint8_t byte1 = (uint8_t) ((strtoull(argv[i], NULL, 10) >> 8) & 0xFF); // Extract byte 1
        printf("%-3d 0x%02X %-3d\n", i, byte1, byte1); 
    }

    return 0;
}
