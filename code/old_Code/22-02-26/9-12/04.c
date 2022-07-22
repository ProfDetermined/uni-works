#include <stdio.h>
// #include <ctype.h>
#include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

int main() {
    int age = 14;
    float grade = 4.00;
    char song[] = "More than word";

    printf("size of age = %d bytes\n", sizeof(age));
    printf("size of grade = %d bytes\n", sizeof(grade));
    printf("size of song = %d bytes\n", sizeof(song));
    printf("size of double = %d bytes\n", sizeof(double));
    printf("\n\n");

    return 0;
}