#include <stdio.h>
#include <curses.h>

int main() {
    int count = 0;
    int c = 0;
    char msg[100];

    printf("Typing in your text : ");
    scanf("%s", msg);

    while (msg[c] != '\0') {        
        if ((msg[c]=='.') || (msg[c]=='?'))
            count++;
        c++;
    }

    printf("Sentence Count : %d sentence", count);
    

    return 0;
}