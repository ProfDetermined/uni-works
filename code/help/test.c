#include <stdio.h>
#include <string.h>

int main ()
{
    float cow_grade , cost_bpk , payback , total_baht;
    char name , lastname ;
    int costumer_id , cow_total , stop;

	// Loop
	int costumer = 0; //Starting Customer Amount
	int cow_number = 1; //Number of Cow
	int s_cus = 0; //Saving customer amount
	int a_cus = 1; //Customer Based

    do {
		if (stop != 0) {
			s_cus = s_cus + costumer;
			costumer = 0;

			for (costumer; costumer < a_cus; costumer++) {
				printf("\n\n");
				printf("\n\n\n\tCOSTUMER #%d", s_cus + 1);

				printf("\n\n\tEnter your name\n\t: ");
				scanf("%s",&name);
				printf("\n\tyour last name\n\t: ");
				scanf("%s",&lastname);
				printf("\n\tEnter your costomer ID\n\t: ");
				scanf("%d",&costumer_id);

				printf("\n\tHow many cow(s) for sell\n\t: ");
				scanf("%d",&cow_total);

				// Inner Loop
				for (cow_number = 1 ; cow_number <= cow_total ;cow_number++) {
					printf("\n\n");
					printf("\tEnter your cow number %d's grade\n\t: ",cow_number);
					scanf("%f",&cow_grade);

					if (cow_grade = 2.5){
						cost_bpk = 210;
						payback = 0;
					}
				}

				printf("\n\n\tEnter 0 to end program\n\t: ");
				scanf("%d",&stop);
			}
        }

    } while (stop != 0);

	

	return 0;
}
