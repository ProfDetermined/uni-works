#include <stdio.h>
// #include <ctype.h>
// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string.h>

// #include <curses.h>

void showMenu();
char getChoice(char min, char max);
int getOpr();

int sum(int a, int b);
int rm(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void main() {
    char ans;
    int res, opr1, opr2;

    // show choice
    showMenu();
    ans = getChoice('1', '4');

    // get opr
    opr1 = getOpr();
    opr2 = getOpr();

    switch ( ans )
    {
    case '1':
        res = sum(opr1, opr2);
        printf("%d + %d = %d\n", opr1, opr2, res);
        break;
    case '2': 
        res = rm(opr1, opr2);
        printf("%d - %d = %d\n", opr1, opr2, res);
        break;
    case '3':
        res = mul(opr1, opr2);
        printf("%d * %d = %d\n", opr1, opr2, res);
        break;
    case '4':
        res = div(opr1, opr2);
        printf("%d / %d = %d\n", opr1, opr2, res);
        break;
    }

    // return 0;
}

// Showing Menu
void showMenu() {
    printf("Integer calculation\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
}

// Getting choice
char getChoice(char min, char max) {
    char ch;
    char inp;

    do {
        printf("Enter your choice (%c - %c) : ", min, max);
        scanf("%c", &inp);
    } while (ch < min || ch > max);
    
    ch = getchar(inp);

    return ch;
}

int getOpr() {
    int inp;
    printf("Enter an Integer operand: ");
    scanf("%d", &inp);

    return inp;
}

int sum(int a, int b) {
    return (a + b);
}

int rm(int a, int b) {
    return (a - b);
}

int mul(int a, int b) {
    return (a * b);
}

int div(int a, int b) {
    return (a / b);
}