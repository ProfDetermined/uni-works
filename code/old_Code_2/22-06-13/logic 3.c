#include <stdio.h>

int main() {
    int i = 12, j = 0;

    printf("(i >= 10) || (j <= 0) \n\n");
    printf("i = %d, j = %d \n\n", i, j);

    if ((i >= 10) || (j <= 0)) {
        printf("True");
    } else {
        printf("False");
    }

    printf("\n\n\n\n");
    i = 8, j = 4;

    printf("(i >= 10) || (j <= 0) \n\n");
    printf("i = %d, j = %d \n\n", i, j);

    if ((i >= 10) || (j <= 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}