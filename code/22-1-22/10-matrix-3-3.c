#include <stdio.h>
#include <curses.h>

int main() {
    int matrix[3][3], r, c;
    
    // Inputting Metrix Value
    for (r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("Enter no. [%d][%d] : ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }

    // Resulting Natrix
    printf("\n\t*** Matrix ***\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%5d ", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}