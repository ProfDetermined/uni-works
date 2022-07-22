#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>


int func(int x) {
    printf("\n");
    printf("Inside cbv x = %d before +10. \n", x);
    x += 10;
    printf("Inside cbv x = %d after +10. \n", x);
    printf("\n");
}

void main() {
    int a = 10;

    printf("\n");
    
    printf("a = %d before cbv funtion. \n", a);
    func(a);
    printf("a = %d after cbv function. \n", a);
    
    printf("\n");

    // return 0;
}