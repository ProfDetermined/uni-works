#include <stdio.h>

int main() {
    int a = 9, b = 4, c;

    c=a+b;
    printf("a = %d, b = %d, [a+b]=c, c = %d \n", a, b, c);

    c=a-b;
    printf("a = %d, b = %d, [a-b]=c, c = %d \n", a, b, c);

    c=a*b;
    printf("a = %d, b = %d, [a*b]=c, c = %d \n", a, b, c);

    c=a/b;
    printf("a = %d, b = %d, [a/b]=c, c = %d \n", a, b, c);

    c=a%b;
    printf("a = %d, b = %d, [a%%b]=c, c = %d \n", a, b, c);


    return 0;
}