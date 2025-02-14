#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

// Uninitialized global variable (BSS section)
int uninitialized_var;

// Function definition
void sample_function() {}

int main() {
    // Stack variable
    int stack_var;

    // Initialized string (stored in the read-only data section)
    const char *init_data = "initialized string";

    // Print addresses
    printf("stack variable: 0x%012lX\n", (uint64_t)(uintptr_t)&stack_var);
    printf("initialized data: 0x%012lX\n", (uint64_t)(uintptr_t)init_data);
    printf("uninitialized data: 0x%012lX\n", (uint64_t)(uintptr_t)&uninitialized_var);
    printf("main: 0x%012lX\n", (uint64_t)(uintptr_t)&main);
    printf("function: 0x%012lX\n", (uint64_t)(uintptr_t)&sample_function);

    return 0;
}
