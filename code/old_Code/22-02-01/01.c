#include <stdio.h>
// #include <curses.h>

int main() {
    int x[5] = {12,3,34,56,70};
    int *ip = &x[0];
    int y = *ip;

    printf("x's memory : %p\n", &x);
    printf("ip's memory : %p\n", &ip); 
    printf("ip's value : %p\n", &x);

    printf("\n\n");

    printf("ip's value : %p\n", ip);
    printf("pointer's value that point to ip : %d\n", *ip);
    printf("y's value : %d\n", y);

    printf("\n\n");

    ip++;
    y = *ip;

    printf("ip's value : %p\n", ip);
    printf("pointer's value that point to ip : %d\n", *ip);

    return 0;
}