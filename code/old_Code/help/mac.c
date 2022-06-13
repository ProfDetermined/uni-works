#include <stdio.h>

int main() {
    char text[20] = "This is a C program.";
    int i, d;

    for (i=0; i<20; i++) {
        printf("%c", text[i]);
    }
    printf("\n\n\n");

    for (i=0; i<12; i++) {
        printf("%c", text[i]);
        if (i == 11) {
            printf("\n");
        }
    }
    for (i; i<20; i++) {
        printf("%c", text[i]);
    }
    printf("  ");
    for (i=0; i<20; i++) {
        printf("%c", text[i]);
    }
    printf("\n\n\n");

    for (i=0; i<20; i++) {
        printf("%c", text[i]);
        if (i == 4) {
            printf("\n");
        } else if (i == 7) {
            printf("\n");
        } else if (i == 9) {   
            printf("\n");
        } else if (i == 11) {
            printf("\n");
        }
    }
    printf("\n\n\n");

    for (i=0; i<20; i++) {
        printf("%c", text[i]);
        if (i == 4) {
            printf("\t");
        } else if (i == 7) {
            printf("\t");
        } else if (i == 9) {   
            printf("\t");
        } else if (i == 11) {
            printf("\t");
        }
    }
    printf("\n\n\n");

    return 0;
}