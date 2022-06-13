#include <stdio.h>
#include <curses.h>

int main() {
    int i;

    int no[3] = {23, -186, 43};
    float subValue[5] = { 0.98, 43.213, -3.47, 52.08, -0.987 };
    char vowAlp[5] = {'a', 'e', 'i', 'o', 'u'};
    char uName[5] = {'D', 'e', 't', 'z', 'z',};

    for (i = 0; i < 3; i++) {
        int iPos = i + 1;
        printf("No. at Postion %d = %c\n", iPos, no[i]);
    }

    printf("\n\n");
    
    for (i = 0; i < 5; i++) {
        int iPos = i + 1;
        printf("Decimal No. at Postion %d = %c\n", iPos, subValue[i]);
    }

    printf("\n\n");
    
    for (i = 0; i < 5; i++) {
        int iPos = i + 1;
        printf("Vowel at Postion %d = %c\n", iPos, vowAlp[i]);
    }

    printf("\n\n");

    for (i = 0; i < 5; i++) {
        int iPos = i + 1;
        printf("Name Position %d = %c\n", iPos, uName[i]);
    }

    return 0;
}