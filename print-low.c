#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) {
        char *endptr;
        int64_t number = strtoll(argv[i], &endptr, 0); // Convert input to signed 64-bit integer

        int low_bits = number & 0xFF; // Extract the lowest 8 bits

        printf("%d 0x%02X %3d\n", i, low_bits, low_bits);
    }

    return 0;
}
