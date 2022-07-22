#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

int func(int x) {
    char lint;
    printf("Enter Char. : ");
    scanf("%c", &lint);
    while (x > 0) {
        printf("%c", lint);
        x--;
    }
    printf("\n");
    return lint;
}

void main() {
    char inp;
    inp = func(5);
    printf("%c\n", inp);

    // return 0;
}