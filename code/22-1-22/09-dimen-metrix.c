#include <stdio.h>
// #include <curses.h>

#define WIDTH 5
#define HEIGHT 3

int square [HEIGHT][WIDTH];
int n,m;

int main() {
    for (n = 0; n < HEIGHT; n++) {
        for (m = 0; m < HEIGHT; m++) {
            square[n][m] = (n + 1)*(m + 1);
            printf("square [%d][%d] = %d\n", n, m, square[n][m]);
        }
    }

    return 0;
}