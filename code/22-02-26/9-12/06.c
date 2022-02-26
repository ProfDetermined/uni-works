#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

int f2i(int);
int feet, inches;

int main() {
    feet = 6;
    inches = f2i(feet);
    printf("%d ft. = %d inches", feet, inches);

    return 0;
}

int f2i(int f) {
    return f*12;
}