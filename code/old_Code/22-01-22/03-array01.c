#include <stdio.h>
#include <curses.h>

int main() {
    char id [3] [9];
    float point [3];
    int i;

    for (i = 1; i < 4; i++) {
        printf("Enter ID [No. %d] : ", i);
        scanf("%s", id[i]);
        printf("Enter Score [No. %d] : ", i);
        scanf("%f", &point[i]);
    }

    return 0;
}