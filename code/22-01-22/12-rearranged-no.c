#include <stdio.h>
#include <curses.h>

#define SIZE 10

int main() {
    int no[SIZE], tmp, n;
    for (n=0; n < SIZE; n++) {
        printf ("Enter no[%d] : ", n + 1);
        scanf("%d", &no[n]);
    }
    
    for (n = 0; n < SIZE - 1; n++) {
        if (no[n] > no[n+1]) {
            tmp = no[n+1];
            no[n+1] = no[n];
            no[n] = tmp;
        }
    }

    printf("\n\n");
    printf("The maximum no. = %d\n", no[SIZE-1]);

    return 0;
}