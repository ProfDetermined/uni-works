#include <stdio.h>

void main(void) {
    int i = 1;
    char option;

    do
    {
        printf("enter your option (A-F) : ");
        option = getchar();

        if(i == 3)
            break;

        i++;

    } while (option < 'A' || option > 'F');

    if (option < 'A' || option > 'F')
        printf("you have entering invalid options for 3 times \n");
    else
        printf("Your option '%c' is valid \n", option);
}