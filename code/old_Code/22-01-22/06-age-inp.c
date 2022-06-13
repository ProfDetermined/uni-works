#include <stdio.h>
#include <curses.h>

int main() {
    int age[20];
    int count = 0;

    for (count = 0; count < 20; count++) {
        int sCount = count + 1;
        printf("Enter Age [User %d] : ", sCount);
        scanf("%d", &age[count]);
    }

    printf("\n\n");

    for (count = 0; count < 20; count++) {
        int sCount = count + 1;
        printf("User %d's Age = %d\n", sCount,  age[count]);
    }

    return 0;
}