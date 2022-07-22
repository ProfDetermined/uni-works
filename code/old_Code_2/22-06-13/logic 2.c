#include <stdio.h>

int main() {
    int x = 7, y = 8, i = 5;

    printf("(x+y) <= 15 || (i == 5) \n\n");
    printf("x = %d, y = %d, i = %d \n\n", x, y, i);

    if ((x+y) <= 15 || (i == 5)) {
        printf("True");
    } else {
        printf("False");
    }

    printf("\n\n\n\n");
    int x = 10, y = 7, i = 6;

    printf("(x+y) <= 15 || (i == 5) \n\n");
    printf("x = %d, y = %d, i = %d \n\n", x, y, i);

    if ((x+y) <= 15 || (i == 5)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}