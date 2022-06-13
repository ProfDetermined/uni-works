#include <stdio.h>
// #include <ctype.h>
#include <conio.h>
// #include <math.h>
// #include <stdlib.h>
#include <string.h>

// #include <curses.h>


// int func() {

// }

void main() {
    char str1[30] = "Current Date ";
    char str2[30] = "18 August 2008";
    char str3[30];
    
    strcpy(str3, str1);
    strcpy(str1, str2);

    printf("str1 = %s\n", str1);
    printf("str3 = %s\n", str3);
    
    // return 0;
}