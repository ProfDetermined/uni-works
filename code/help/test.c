#include <stdio.h>

int main ()
{
	float cow_grade , cost_bpk , payback , cow_weight ,total_baht;
	char name , lastname ;
	int costumer = 0 , costumer_id , cow_total , cow_number = 0 ;
	
	for (costumer = 0 ; costumer >= 0 ; costumer++)
	{
		printf("\n\n");
		printf("\tCOSTUMER #%d",costumer);
		
		do {
		printf("\n\n\tEnter your name\n\t: ");
		scanf("%s",&name);
		printf("\n\tyour last name\n\t: ");
		scanf("%s",&lastname);
		printf("\n\tEnter your costomer ID\n\t: ");
		scanf("%d",&costumer_id);
		printf("\n\n\tHow many cow(s) for sell\n\t: ");
		scanf("%d",&cow_total);
		for (cow_number = 0 ; cow_number = cow_total ;cow_number++)
		{
			
			printf("\n\n");
			printf("\tEnter your cow number %d's weight\n\t: ",cow_number);
		}
	}
		while (costumer != 10);
	}

    return 0;
}