#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

int func() {
    int a;
    printf ("Enter No. : ");
    scanf("%d", &a);
    printf("\n\n");
    return (a*5);
}

void main() {
    printf("\n\n");
    printf("%d", func());
    printf("\n\n");

    // return 0;
}