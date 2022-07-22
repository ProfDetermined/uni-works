#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>


int func(int *a, int *b) {
    int temp;
    printf("swap: a = %d, b = %d\n", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("swap: a = %d, b = %d\n", *a, *b);
}

void main() {
    int x = 5, y = 10; 

    printf("main: x = %d, y = %d\n", x, y);
    func(&x, &y);
    printf("main: x = %d, y = %d\n", x, y);
    
    // return 0;
}