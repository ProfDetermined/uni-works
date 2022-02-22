#include <stdio.h>;

int main() {
	int cust = 0;
	char qList = 'a', quit = 'a';
	int type, ppL, list=0, lTotal=0;
	float lPrice, weight;
	
	float w_som1 = 0, w_som2 = 0, w_som3 = 0;
	float p_som1 = 0, p_som2 = 0, p_som3 = 0;
	float w_total1 = 0, w_total2 = 0, w_total3 = 0;
	float p_total1 = 0, p_total2 = 0, p_total3 = 0;
	
	do {
		printf ("Customer #%d \n\n", cust + 1);
		
		do {
			lTotal = lTotal + list;
			list = 0;
			
			printf("Enter Your Som-O Type\n\n");
		
			printf("1: 0.8 - 1 kg ( 45THB/kg )\n");
			printf("2: 1-2 kg ( 50THB/kg )\n");
			printf("3: More than 2 kg (55THB/kg)\n\n");
			printf(": ");
			scanf("%d", &type);
			switch (type) {
				case 1: 
					ppL = 45;
					break;
				case 2:
					ppL = 50;
					break;
				case 3:
					ppL = 55;
					break;
				default:
					type = 1;
					ppL = 45;
					break;
			}
			
			printf ("How much would the customer would buy? : ");
			scanf("%f", &weight);
			
			if (type == 1) {
				w_som1 = weight;
				p_som1 = ppL * w_som1;
				w_total1 = w_total1 + w_som1;
				p_total1 = p_total1 + p_som1;
			} else if (type == 2) {
				w_som2 = weight;
				p_som2 = ppL * w_som2;
				w_total2 = w_total2 + w_som2;
				p_total2 = p_total2 + p_som2;
			} else if (type == 3) {
				w_som3 = weight;
				p_som3 = ppL * w_som3;
				w_total3 = w_total3 + w_som3;
				p_total3 = p_total3 + p_som3;
			}
			
			type = 0;
			list = list + 1;
			
			printf("\n\n Enter 'e' to finished this Bill.. : ");
			scanf("%s", &qList);
			
			printf("\n\n");
			
		} while(qList != 'e');
		
		printf("You got %d item(s) to pay \n", list);
		if(w_som1 != 0) {
			printf(" - %.2f kg. : Som-O [0.8 - 1 kg.] (45THB/kg.) : %.2f THB \n", w_som1, p_som1);
		}
		
		if (w_som2 != 0) {
			printf(" - %.2f kg. : Som-O [1-2 kg.] (50THB/kg.) : %.2f THB \n", w_som2, p_som2);
		}
		
		if (w_som3 != 0) {
			printf(" - %.2f kg. : Som-O [More than 2 kg.] (55THB/kg.) : %.2f THB \n", w_som3, p_som3);
		}
		
		printf("\n\n");
		printf(" Enter 'e' to end this program : ");
		scanf("%s", &quit);
		
		if (quit != 'e') {
			cust = cust + 1;
			printf("\n");
			printf("=================================");
			printf("\n\n");
		} else {
			printf("\n");
			printf("=================================");
			printf("\n\n");
		}
	} while (quit != 'e');
	
	printf("Total Customer : %d\n", cust + 1);
	printf("Purchased %d item", lTotal);
	printf("Total weight of Som-O [0.8 - 1 kg.] : %.2f kg. \n  Balance of this type : %.2f\n\n", w_total1, p_total1);
	printf("Total weight of Som-O [1-2 kg.] : %.2f kg. \n  Balance of this type : %.2f\n\n", w_total2, p_total2);
	printf("Total weight of Som-O [More than 2 kg.] : %.2f kg. \n  Balance of this type : %.2f\n\n", w_total3, p_total3);
	printf("Total : %.2f", p_total1 + p_total2 + p_total3);
	
}
