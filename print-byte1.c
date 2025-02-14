#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {
        char *endptr;
        int64_t number = strtoll(argv[i], &endptr, 0); // Convert input to signed 64-bit integer

        if (*endptr != '\0') { 
            fprintf(stderr, "Invalid input: %s\n", argv[i]);
            continue;
        }

        // Extract byte 1 (next lower byte) by shifting right 8 bits and masking with 0xFF
        int byte1 = (number >> 8) & 0xFF;

        // Print formatted output
        printf("0x%02X %3d\n", byte1, byte1);
    }

    return 0;
}
