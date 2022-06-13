#include <stdio.h>

int main() {
    float a = 12.4, b = 5.3, c;

    c = (int) a + b;

    printf("c = %.1f \n", c);

    printf("\n");
    for (int d = 0; d < 50; d++)
        printf("=");
    printf("\n\n");

    c = (int) (a + b);

    printf("c = %.1f \n", c);

    return 0;
}