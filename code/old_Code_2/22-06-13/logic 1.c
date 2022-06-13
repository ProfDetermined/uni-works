#include <stdio.h>

int main() {
    int i = 9, j = 20;

    printf("i < 10 & j > 10 \n\n");
    printf("i = %d, j = %d \n\n", i, j);

    if ((i < 10) && (j > 10)) {
        printf("True");
    } else {
        printf("False");
    }

    printf("\n\n\n\n");
        
    i = 11, j = -10;

    printf("i < 10 & j > 10 \n\n");
    printf("i = %d, j = %d \n\n", i, j);

    if ((i < 10) && (j > 10)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}