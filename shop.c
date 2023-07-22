#include <stdio.h>

int main() {
	int menu;
	float total = 0, calculate;
	char day;
	
	float price[5] = {50, 40, 40, 30, 8.5};
	
	do {
		int menuStore[5] = {0, 0, 0, 0, 0};
		
		do {
			printf("\t1. Pizza\t\t50 THB\n");
			printf("\t2. Burger\t\t40 THB\n");
			printf("\t3. Cake\t\t\t40 THB\n");
			printf("\t4. Chocolate\t\t30 THB\n");
			printf("\t5. Water\t\t8.50 THB\n");
			printf("\n");
			printf("\t0. Calculate\n");
			printf("\n");
			printf("Enter Menu: ");
			scanf("%d", &menu);
			
			printf("\n===================================================================\n\n");
			
			if(menu == 1) {
				menuStore[0]++;
			} else if(menu == 2) {
				menuStore[1]++;
			} else if (menu == 3) {
				menuStore[2]++;
			} else if (menu == 4) {
				menuStore[3]++;
			} else if (menu == 5) {
				menuStore[4]++;
			} else if (menu == 0) {
				printf("Thank You!\n\n");
			} else {
				printf("Error! Please try again..");
			}
			
			printf("\t1. Pizza\t\t50 THB\t\t %d => %.2f\n", menuStore[0], menuStore[0] * price[0]);
			printf("\t2. Burger\t\t40 THB\t\t %d => %.2f\n", menuStore[1], menuStore[1] * price[1]);
			printf("\t3. Cake\t\t\t40 THB\t\t %d => %.2f\n", menuStore[2], menuStore[2] * price[2]);
			printf("\t4. Chocolate\t\t30 THB\t\t %d => %.2f\n", menuStore[3], menuStore[3] * price[3]);
			printf("\t5. Water\t\t8.50 THB\t %d => %.2f\n", menuStore[4], menuStore[4] * price[4]);
			
			printf("\n===================================================================\n\n");
			
		} while (menu != 0);
		
		calculate = (menuStore[0] * price[0]) + (menuStore[1] * price[1]) + (menuStore[2] * price[2]) + (menuStore[3] * price[3]) + (menuStore[4] * price[4]);
		printf("This Customer Price: %.2f\n", calculate);
		printf("Press 'n' to end this day: ");
		fflush(stdin);
		scanf("%c", &day);
		
		printf("\n===================================================================\n\n");
		
		total += calculate;
	} while (day != 'n');
	
	printf("This day total => %.2f", total);
	
	return 0;
}
