#include <stdio.h>

int main() {
    int i = 3;
    printf("i = %d\n", i);

    int b = i++;
    printf("b = %d\n", b);
    printf("i = %d\n", i);

    printf("\n\n\n\n\n");

    i = 3;
    printf("i = %d\n", i);

    b = ++i;
    printf("b = %d\n", b);
    printf("i = %d\n", i);

    return 0;
}