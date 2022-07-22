#include <stdio.h>
#include <string.h>
#include <ctype.h>

// #include <conio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <curses.h>

int main() {
    char string[10];
    char *str = "Abc";

    // Copy
    strcpy(string, str);
    printf("%s\n", string);

    // Connect
    strcat(string, "Def");
    printf("%s \n", string);
    
    // Compare
    printf("%d\n", strcmp(str, "abc"));
    printf("%d\n", strcmpi(str, "abc"));

    // Length
    printf("%d\n", strlen(string));

    // toLower & toUpper
    string[0] = tolower(string[0]);
    string[1] = toupper(string[1]);

    printf("%s\n", string);
    
    return 0;
}