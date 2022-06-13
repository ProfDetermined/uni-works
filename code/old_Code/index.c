#include <stdio.h>



int main() {
    int a[4] = {1,2,3,4};
    int *ptr;

    printf("%p\n", &a[3]);
    printf("%p\n", ptr);

    ptr = &a[3];

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}