#include <stdio.h>
#include <curses.h>

int main() {
    int year[5] = {2552, 2553, 2554, 2555, 2556};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", year[i]);
    }

    return 0;
}