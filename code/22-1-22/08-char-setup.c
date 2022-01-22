#include <stdio.h>
#include <curses.h>

int main() {
    char sentence[22] = "Welcome to my country";
    char word[9] = {'T', 'h', 'a', 'i', 'l', 'a', 'n', 'd'};
    char alp[4] = {'l', 'o', 'v', 'e'};

    printf("msg1 = %s\n", sentence);
    printf("msg2 = %s\n", word);
    printf("msg3 = %s\n", alp);

    return 0;
}