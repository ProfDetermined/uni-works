#include <stdio.h>
// #include <curses.h>

int main() {
    int x[] = {1,2,3,4,5,6};
    int *ip = &x[0];

    printf("\n\n");
    
    printf("x's memory address : %p\n", &x);
    printf("ip's memory address : %p\n", &ip); 
    printf("ip's value : %p\n", &x);
    printf("pointer's value that point to ip : %d\n", *ip);

    printf("\n\n");
    ip = ip+4;

    printf("pointer's value that point to ip : %d\n", *ip);

    return 0;
}