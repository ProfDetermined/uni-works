#include <stdio.h>

int main() {
    int i = 7;

    printf("(i < 10) && 0 \n\n");
    printf("i = %d \n\n", i);

    if ((i < 10) && 0) {
        printf("True");
    } else {
        printf("False");
    }

    printf("\n\n\n\n");

    i = 0;

    printf("(i < 10) && 0 \n\n");
    printf("i = %d \n\n", i);

    if ((i < 10) && 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}