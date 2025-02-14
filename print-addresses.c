#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        uint64_t num = strtoull(argv[i], NULL, 10); // Convert input to unsigned 64-bit integer
        uint64_t masked_num = num & 0xFFFFFFFFFFFF; // 48-bit 
        printf("0x%012lX\n", masked_num);  // Print in hex
    }

    return 0;
}
