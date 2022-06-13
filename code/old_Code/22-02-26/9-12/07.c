#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

void plus(int, int);
int summary;

int main() {
    plus(20, 30);
    printf("summary = %d", summary);

    return 0;
}

void plus(int fn, int bn) {
    summary = fn + bn;
}