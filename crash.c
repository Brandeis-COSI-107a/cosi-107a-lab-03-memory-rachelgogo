#include <stdio.h>

int crash(int *x) {
    printf("I'm going to print x!\n");
    printf("The value of *x is %d\n", *x);
    return 0;
}

int main(int argc, char **argv) {
    printf("We're going to crash!\n");
    int value = 42;
    crash(&value);
    printf("Back after the crash?\n");
}
