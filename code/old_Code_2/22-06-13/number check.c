#include <stdio.h>

int main() {
    int a = 21, b=10;

    if (a == b)
        printf("Line 1 - a = b \n");
    else
        printf("Line 1 - a != b \n");
    
    if (a < b)
        printf("Line 2 - a < b \n");
    else
        printf("Line 2 - a !< b \n");
    
    if (a > b)
        printf("Line 3 - a > b \n");
    else
        printf("Line 3 - a !> b \n");
    
    printf("BYE! \n");

    return 0;
}