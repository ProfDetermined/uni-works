#include<stdio.h>
void main()
{
	int i, b, a, s, m, l, y, p=0;
	float weight, som_oS=0, som_oM=0, som_oL=0, S_price, M_price, L_price, A_s, A_m, A_l, AA_s, AA_m, AA_l,SA_p, MA_p, LA_p;
	
	do
	{
	    p++;
	    printf("\n\nCustomer [%d]\n", p);
	    printf("Welcome to PoDee Farm!!!\n\n");
	
	    do
	    {
		    printf("My product is : ");
	        printf("1.Pomelo (0.8-1.0 kg) : 45 Baht\n\t\t2.Pomelo (1.0-2.0 kg) : 50 Baht\n\t\t3.Pomelo (2.0 kg up) : 55 Baht\n\n");
		    printf("Please select product number : ");
		    scanf("%d",&b);
		
		    switch(b)
		    {
			    case 1 : 
			    {
				    printf("\nYou choose product 1\n");
				    printf("Please enter Pomelo's kilogram : ");
				    scanf("%f",&som_oS);
				
				    if((som_oS>=0.8)&&(som_oS<=1.0))
				    {
				    	s++;
				    	A_s += som_oS;	 
			    	}
			     	else
				        printf("Please try again...\n\n");
				    break;
				}
				case 2 :
				{
					printf("You choose product 2\n");
					printf("Please enter Pomelo's kilogram : ");
					scanf("%f",&som_oM);
				
					if((som_oM>1.0)&&(som_oM<=2.0))
					{
						m++;
						A_m += som_oM;	 
					}
					else
				 	   printf("Please try again...\n\n");
				 	break;
				}
				case 3 :
				{
					printf("You choose product 3\n");
					printf("Please enter Pomelo's kilogram : ");
					scanf("%f",&som_oL);
				
					if(som_oL>2.0)
					{
						l++;
						A_l += som_oL;	 
					}
					else
				 	   printf("Please try again...\n\n");
				 	break;
				}
			}
			printf("\n\nenter '1' for next customer : ");
			scanf("%d",&i);
		}
		while(i!=1);
	
		S_price = A_s*45;
		M_price = A_m*50;
		L_price = A_l*55;
		printf("\nCustomer [%d] List : ", p);
		printf("Your select product 1 have %.2f kg. Total price is %.2f Baht\n",A_s, S_price);
		printf("\t\t    Your select product 2 have %.2f kg. Total price is %.2f Baht\n",A_m, M_price);
		printf("\t\t    Your select product 3 have %.2f kg. Total price is %.2f Baht\n\n",A_l, L_price);
	
		SA_p += S_price;
		MA_p += M_price;
		LA_p += L_price;
	
		AA_s += A_s;
		AA_m += A_m;
		AA_l += A_l;	
		printf("Please enter '1' for end program : ");
		scanf("%d",&y);   
		}
		while(y!=1);
	
		printf("\nWe have [%d] customer today\n",p);
		printf("Product 1 have %.2f kg. Total price is %.2f Baht\n", AA_s, SA_p);
		printf("Product 2 have %.2f kg. Total price is %.2f Baht\n", AA_m, MA_p);
		printf("Product 3 have %.2f kg. Total price is %.2f Baht\n", AA_l, LA_p);
	
}
