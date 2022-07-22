#include <stdio.h>
// #include <conio.h>
#include <math.h>
#include <stdlib.h>

// #include <curses.h>

int main() {
    float a = 3.14;
    float b = -123.456;
    float c = 2.7;
    int d = -2000;

    printf("%.3f \n", sin(a));
    printf("%.3f \n", cos(a));
    printf("%.3f \n", tan(a));
    printf("%.3f \n", sqrt(a));
    printf("%.3f \n", pow(a, c));
    printf("%.3f \n", log(a));
    printf("%.3f \n", log10(a));
    printf("%.3f \n", exp(a));
    printf("%.3f \n", fabs(a));
    printf("%.3f \n", abs(a));
    
    return 0;
}