#include <stdio.h>
// #include <curses.h>

int main() {
    int count = 15;
    printf("count's memery = %p, count's value = %d\n", &count, count);

    float pi = 3.1415;
    printf("pi's memery = %p, pi's value = %f\n", &pi, pi);

    char ch = 'A';
    printf("ch's memery = %p, ch's value = %c\n", &ch, ch);
    
    char *chPNTR = &ch;
    printf("chPNTR's memery = %p, chPNTR's value = %p\n", &chPNTR, chPNTR);

    int *intPNTR = &count;
    printf("intPNTR's memery = %p, intPNTR's value = %p\n", &intPNTR, intPNTR);

    float *fltPNTR = &pi;
    printf("fltPNTR's memery = %p, fltPNTR's value = %p\n", &fltPNTR, fltPNTR);
   
    return 0;
}