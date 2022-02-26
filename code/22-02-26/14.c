#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>


int func() {
    int no1;
    no1 = 26;
    printf("1st line (test) : no1 = %d\n", no1);
}

void main() {
    int no1;
    no1 = 19;
    printf("1st line (main) : no1 = %d\n", no1);
    func();
    printf("2nd line (main) : no1 = %d\n", no1);

    // return 0;
}