#include <stdio.h>
// #include <curses.h>

int main() {
    int z = 10;
    int *ZPtr;
    ZPtr = &z;

    printf("Z = %d\n", z);
    printf("Z pointer = %p\n", ZPtr);
    printf("Z pointer = %p\n", ZPtr);

    return 0;
}