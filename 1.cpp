#include <stdio.h>;
#include <string.h>;

int main() {
	float b_weight, d_w, m_w, d_av, m_av;
	char quit = 'a';
	int day, sDay, month = 30, baby, b_Total = 0, b_mTotal = 0;
	int d_male = 0, d_fem = 0, a_male = 0, a_fem = 0, sex = 0;
	
//	Month Loop
	for (day=0; day<30; day++) {
		// Day Loop
		do {
			if (quit != 'N') {
				//	Calling Day
				printf("Day #%d \n", day + 1);
				
				for (baby; baby < 1; baby++) {
					//	Baby Counter
					printf("Baby #%d \n\n", b_Total + 1);
				
					// Asking for weight
					printf("Enter Weight : ");
					scanf("%f", &b_weight);
					d_w = d_w + b_weight;
					
					printf("\n\n");
					
					// Asking for sex
					printf("Enter number to select sex \n");
					printf("1: Male \n");
					printf("2: Female \n");
					printf(": ");
					scanf("%d", &sex);
					
					switch(sex) {
						case 1: 
							d_male = d_male + 1;
							break;
						case 2: 
							d_fem = d_fem + 1;
							break;
					}
					
					// Information Checking
					printf("\n\n");
					
					printf("Weight: %2f\n", b_weight);
					if(sex == 1) {
						printf ("Sex: Male\n");
					} else if (sex == 2) {
						printf("Sex : Female\n");
					}
					
				}
				
				//	Day Loop Quitter
				printf("\n\n");
				printf("Press N to go to the next day : ");
				scanf("%s", &quit);
				printf("\n\n");
				
				b_Total = b_Total + baby;
				baby = 0;
			}
			
			// Calcualting part
			b_mTotal = b_mTotal + b_Total;
			a_male = a_male + d_male;
			a_fem = a_fem + d_fem;
			
		} while (quit != 'N');
		
		printf("Today total = %d \n", b_Total);
		printf("Today Male = %d\n", d_male);
		printf("Today Female = %d\n", d_fem);
		
		d_av = d_w / b_Total;
		printf("Weight average : %2f\n", d_av);
		printf("\n\n");
		
		b_Total = 0;
		d_male = 0;
		d_fem = 0;
		d_w = 0;
		quit = 'a';
	}
	
	printf("Today total = %d \n", b_mTotal);
	printf("Today Male = %d\n", a_male);
	printf("Today Female = %d\n", a_fem);
		
	m_av = m_w / b_mTotal;
	printf("Weight average : %2f\n", m_av);
	printf("\n\n");
	
	return 0;
}
