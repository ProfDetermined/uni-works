#include <stdio.h>
#include <curses.h>

int main() {
    int a, num;
    int range1 = 0;
    int range2 = 0;
    int range3 = 0;
    int range4 = 0;
    float avg = 0;
    float high[300];

    printf("Enter Amount of People : ");
    scanf("%d", &num);
    
    for(a = 0; a < num; a++) {
        printf("\nEnter Height : ");
        scanf("%.2f", &high[a]);
    }

    printf("\n\n");
    
    for (a = 0; a < num; a++) {
        if (high[a] <= 160) {
            range1++;
        } else if (high[a] > 160 && high[a] <= 170) {
            range2++;
        } else if (high[a] > 170 && high[a] <= 180) {
            range3++;
        } else if (high[a] > 180){
            range4++;
        }

        avg = avg + high[a];
    }

    // for (a = 0; a < num; a++) {
    //     if (high[a] <= 160) {
    //         range1++;
    //     } else if (high[a] <= 170) {
    //         range2++;
    //     } else if (high[a] <= 180) {
    //         range3++;
    //     } else {
    //         range4++;
    //     }

    //     avg = avg + high[a];
    //     a++;
    // }

    avg = avg/num;
    
    printf("\nHeight <= 160 : %d person(s)", range1);
    printf("\nHeight between 161 - 170 : %d person(s)", range2);
    printf("\nHeight between 171 - 180 : %d person(s)", range3);
    printf("\nHeight higher than 181 : %d person(s)", range4);
    printf("\nAverage Height : %.2f\n", avg);

    // printf("Height <= 160 : %d person(s)", range1);
    // printf("Height <= 170 : %d person(s)", range2);
    // printf("Height <= 180 : %d person(s)", range3);
    // printf("Height > 180 : %d person(s)", range4);
    // printf("Average Height : %d ", avg);

    printf("\n\n");

    for ( a = 0; a < num; a++ ) {
        int aA = a + 1;
        printf("User %d's height : %.2f\n", aA,  high[a]);
    }

    printf("\n\n");
    printf("End\n");

    return 0;
}