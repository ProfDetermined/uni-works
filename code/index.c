#include <stdio.h>

void main(void) {
    int num = 0;

    printf("the odd no. between 1-10 : ");

    do
    {
        num++;

        if ( (num % 2) == 0 )
            continue;

        printf("%-2d", num);
    } while (num < 10);

    printf("\n\nEven No. between 1-10 : ");

    for (num = 1; num <= 10; num++) {
        if ((num % 2) == 1)
            continue;
        
        printf("%-2d", num);
    }

    printf("\n\n");
}