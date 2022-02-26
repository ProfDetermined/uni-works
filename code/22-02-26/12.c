#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

int num;

int func(int n) {
    int i = 1;
    for(i = 1; i < n; i++){
        printf("*");
    }
    printf("\n");
}

void main() {
    num = 9;
    func(num);
    printf("*CPE-UP*");
    printf("\n");
    func(num);

    // return 0;
}