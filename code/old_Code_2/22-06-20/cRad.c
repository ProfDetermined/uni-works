#include <stdio.h>

int main() {
    float pi = 3.14;
    float cArea, r;

    printf("Enter radius of the circle : ");
    scanf("%f", &r);

    cArea = pi * r * r;

    printf("Circle Area = %.2f\n", cArea);

    return 0;
}