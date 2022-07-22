#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

void mp(int x) {
    printf("%d", x);
}

void mp2(char inp, int y) {
    while (y > 0) {
        printf("%c", inp);
        y--;
    }
}

void main() {
    printf("\n");
    mp(2);
    printf("\n\n");
    mp2('a', 5);
    printf("\n\n");

    // return 0;
}