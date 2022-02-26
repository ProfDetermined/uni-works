// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char name, sName;
    int vAmount;
    int user = 0, sUser=0;
    int quit = 1, sc;
    
    do {
        if (quit != 0) {
            sUser = sUser + user;
            user = 0;
            
            for (user; user < 2; user++) {
                printf("User #%d \n\n", sUser);
                printf("Enter your Name :");
                scanf("%s", &name);
                printf("Enter your Surname :");
                scanf("%s", &sName);

                printf("\n\n");
                
                printf("1: Organic no chem : 100 THB/kg. \n");
                printf("2: Hydroponic no chem : 70 THB/kg.\n");
                printf("3: Hydroponic with chem : 50 THB/kg.\n");
                printf("4: Normal no chem : 50 THB/kg.\n");
                printf("5: Normal no chem : 30 THB/kg.\n\n");
                printf("Enter Vegetable Type :");
                
            }
        }
    } while (quit != 0);
    
    return 0;
}