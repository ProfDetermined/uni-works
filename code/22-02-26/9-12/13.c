#include <stdio.h>
// #include <ctype.h>
#include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>
int num1;

int func() {
    num1 = 26;
    printf("line1 (test) : num1 = %d\n", num1);
}

void main() {
    num1 = 19;
    printf("\n\n");
    printf("line1 (main) : num1 = %d\n", num1);
    printf("\n");
    func();
    printf("\n");
    printf("line2 (main) : num1 = %d\n", num1);
    printf("\n\n");

    // return 0;
}