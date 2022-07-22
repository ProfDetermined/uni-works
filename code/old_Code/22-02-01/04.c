#include <stdio.h>
// #include <curses.h>

int main() {
    float num[5] = {19.01, 26.09, -4.23, -4.23, -13.12};
    float *numPT;

    numPT = &num[1];
    printf("numPT's value : %.2f\n", *numPT);

    float v1, v2;

    v1 = *(numPT + 3);
    printf("1st value : %.2f\n", v1);

    v2 = *(numPT + 1);
    printf("2nd value : %.2f\n", v2);
    
    return 0;
}