#include <stdio.h>
// #include <curses.h>

int main() {

    int num[5] = {12, 34, 112, 45, 907};
    int *numPT;

    numPT = &num[1];
    printf("numPT's value : %d\n", *numPT);

    printf("\n");

    numPT = &num[4];
    printf("numPT's value : %d\n", *numPT);

    printf("\n");

    int temp = *numPT;
    printf("temp's value = %d\n", temp);

    return 0;
}