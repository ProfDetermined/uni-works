#include<stdio.h>
#include<stdlib.h>

typedef struct pomelo{
 float weight,money;
}pomelo;

typedef struct  customer{
 pomelo fruit[];
 float total_money=0;
 int num;
 
}customer;

int main(){
 int cus_num=0,number;
 customer people[1000];
 char letter;
 float weight_0,money=0,total,t1=0,t2=0,t3=0,m1=0,m2=0,m3=0;
 
 do{
 cus_num++;
 printf("Customer number : %d\n",cus_num);
 number=0;
 total=0;
 do{
 number++;
 printf("\n\t********************\n");
 printf("\n\tOrder : %d\n",number);
 printf("\t\tPlease enter the weight of the pomelo  (kg): ");
 scanf("%f",&weight_0);
 people[cus_num].fruit[number].weight=weight_0;
 if(weight_0>=0.8&&weight_0<=1){
 t1+=weight_0;
 money=(weight_0*45);
 m1+=money;
 printf("\n\t\tWeight : %.2f Kg........%.2f Baht\n",weight_0,money);
 
 }else if(weight_0>1&&weight_0<=2){
 t2+=weight_0;
 money=(weight_0*50);
 m2+=money;
 printf("\n\t\tWeight : %.2f Kg........%.2f Baht\n",weight_0,money);
 
 }else if(weight_0>2){
 t3+=weight_0;
 money=(weight_0*55);
 m3+=money;
 printf("\n\t\tWeight : %.2f Kg........%.2f Baht\n",weight_0,money);
 
 }else{
 printf("Error");
 number--;
 }
 people[cus_num].fruit[number].money=money;
 total+=money;
 printf("\n\t\tWould you like to order more?  [Y/N] : ");
 scanf("%s",&letter);
 }while(letter=='y'||letter=='Y');
 
 printf("\n\tTatal price : %.2f Baht\n",total);
 
 
 people[cus_num].total_money=total;
 people[cus_num].num=number;
 
 printf("\n\tDo you want to stop today's sales program? [Y/N] : ");
 scanf("%s",&letter);
 printf("\n");
 }while(letter=='n'||letter=='N');
 printf("\n\n\n\n\n***********Summarize************\n\n\n");
 printf("Amount of customer : %d",cus_num);
 for(int i=0;i<cus_num;i++){
 printf("\n\n\t***********************\n");
 printf("\n\tCustomer Number : %d",i+1);
 printf("\n\tAmount of order : %d\n",people[i+1].num);
 for(int j=0;j<people[i+1].num;j++){
 printf("\n\t\tWeight : %.2f Kg.................%.2f Baht\n",people[i+1].fruit[j+1].weight,people[i+1].fruit[j+1].money);
 }
 printf("\n\tTatal price     : %.2f Baht",people[i+1].total_money);
 }
 printf("\n\nThe number of orders for each type : ");
 printf("\n\tWeight   0.8-1.0 Kg : %.2f",t1);
 printf("\n\tWeight   1.0-2.0 Kg : %.2f",t2);
 printf("\n\tWeight up to 2.0 Kg : %.2f\n",t3);
 
 printf("\n\nThe money of orders for each type : ");
 printf("\n\tWeight   0.8-1.0 Kg : %.2f Baht",m1);
 printf("\n\tWeight   1.0-2.0 Kg : %.2f Baht",m2);
 printf("\n\tWeight up to 2.0 Kg : %.2f Baht",m3);
 
 printf("\n\nTotal money of the day  : %.2f",m1+m2+m3);
 
 
 return 0;
}