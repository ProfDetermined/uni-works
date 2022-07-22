#include <stdio.h>
#include <conio.h>
#include <math.h>

// #include <curses.h>

int main() {
    double rad = -1.0;
    do {
        printf("Sine of %f is %f\n", rad, sin(rad));
        rad += 0.1;
    } while (rad <= 1.0);
    
    return 0;
}