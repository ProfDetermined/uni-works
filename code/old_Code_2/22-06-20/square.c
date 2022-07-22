#include <stdio.h>

int main() {
    int n, a, b;

    printf("Enter Number : ");
    scanf("%d", &n);
    printf(" :D\n\n");

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < n; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}