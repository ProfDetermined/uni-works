#include <stdio.h>
#include <curses.h>

int main() {
    int year[5] = {2552, 2553, 2554, 2555, 2556};
    int i;

    for (i = 0; i < 5; i++) {
        int iOut = i + 1;
        printf("%d. %d\n", iOut,  year[i]);
    }

    return 0;
}