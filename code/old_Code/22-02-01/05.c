#include <stdio.h>
// #include <curses.h>

int main() {
    int a, b, c, *pa[3];

    a = 5;
    b = 10;
    c = 15;

    pa[0] = &a;
    pa[1] = &b;
    pa[2] = &c;

    printf("1st pa's = %d\n", *pa[0]);
    printf("2st pa's = %d\n", *pa[1]);
    printf("3st pa's = %d\n", *pa[2]);
    
    return 0;
}