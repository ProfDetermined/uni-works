#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>


int func(int *y) {
    printf("Inside callbyref y = %d before +10. \n", *y);
    (*y) += 10;
    printf("Inside callbyref y = %d after +10. \n", *y);
}

void main() {
    int b=10;
    printf("b = %d before func callbyref.\n", b);
    func(&b);
    printf("b = %d after func callbref. \n", b);

    // return 0;
}