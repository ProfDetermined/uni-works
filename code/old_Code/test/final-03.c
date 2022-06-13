#include<stdio.h>
#include<stdlib.h>
typedef struct{
	float C;
	float Phy;
	float Che;
	float Cal;
	float Body;
}student_subject;

typedef struct{
	char ID[9];
	char name[30];
	char last[30];
	char age[3];
	char sex[6];
	char tell[11];
	float avg_grad;
	student_subject grad;
}student_profile;

student_profile *ptr_std;
void Get_studentDetail(int);
void GradCalculation(void);
void Sorting_function(student_profile*,int);
void Show_output(int);


int main(){
	int num,i,j,k;
	printf("Welcome to program\n");
	printf("Enter number of student : ");
	scanf("%d",&num);	
	
	student_profile std[num];
	
	for(i=0;i<num;i++){
		ptr_std = &std[i];
		Get_studentDetail(i);
		GradCalculation();
	}
	
	Sorting_function(std,num);
	
	
	

	system("cls");
	for(k=0;k<num;k++){
		ptr_std = &std[k];
		Show_output(k);
		printf("**************************\n");
	}
	
	return 0;
}

void Get_studentDetail(int x){
	printf("You are student [%d]\n",x+1);
		printf("Enter your ID : ");
		scanf("%s",ptr_std->ID);
		printf("Enter your name : ");
		scanf("%s",ptr_std->name);
		printf("Enter your last name : ");
		scanf("%s",ptr_std->last);
		printf("Enter your age : ");
		scanf("%s",ptr_std->age);
		printf("Enter your sex : ");
		scanf("%s",ptr_std->sex);
		printf("Enter your phone : ");
		scanf("%s",ptr_std->tell);
		printf("\tEnter your grad\n");
		printf("\tC Programming : ");
		scanf("%f",&ptr_std->grad.C);
		printf("\tPhysics   : ");
		scanf("%f",&ptr_std->grad.Phy);
		printf("\tChemistry : ");
		scanf("%f",&ptr_std->grad.Che);
		printf("\tCalculus  : ");
		scanf("%f",&ptr_std->grad.Cal);
		printf("\tBody      : ");
		scanf("%f",&ptr_std->grad.Body);
		
}
void GradCalculation(){
	float total;
	float GPA;
	total = (ptr_std->grad.C * 3)+(ptr_std->grad.Phy * 3)+(ptr_std->grad.Che * 3)+(ptr_std->grad.Cal * 3)+(ptr_std->grad.Body * 3);
	GPA = total/(3+3+3+3+3);
	ptr_std->avg_grad = GPA;
	printf("\tYour grad is : %.2f\n",GPA);
}
void Sorting_function(student_profile *ptr1,int num){
		for(int j=0;j<num-1;j++){
			if((ptr1[j].avg_grad)>(ptr1[j+1].avg_grad)){
				student_profile temp;
				temp = ptr1[j];
				ptr1[j] = ptr1[j+1];
				ptr1[j+1] = temp;
				j = -1;
			}
		}				
}

void Show_output(int y){
	printf("You are student [%d]\n",y+1);
		printf("Your ID : %s\n",ptr_std->ID);
		printf("Name : %s %s\n",ptr_std->name,ptr_std->last);
		printf("Age  : %s\n",ptr_std->age);
		printf("Sex  : %s\n",ptr_std->sex);
		printf("Telephone : %s\n",ptr_std->tell);
		printf("\tYour grad\n");
		printf("\tC Programming : %.2f\n",ptr_std->grad.C);
		printf("\tPhysics   : %.2f\n",ptr_std->grad.Phy);
		printf("\tChemistry : %.2f\n",ptr_std->grad.Che);
		printf("\tCalculus  : %.2f\n",ptr_std->grad.Cal);
		printf("\tBody      : %.2f\n",ptr_std->grad.Body);
		printf("Your GPA : %.2f\n",ptr_std->avg_grad);
}


