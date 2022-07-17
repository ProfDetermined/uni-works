#include <stdio.h>
#include <stdlib.h>

int main() {
  int pwd;
  int Money=0, Amount=0, i;

  for(i=0; i<3; i++) {
    printf(" Enter your password : ");

    scanf("%d", &pwd);
    
    if(pwd == 1234) {
      printf("Password correct\n\n");
      break;
    } else {      
      printf("Error, pls try again\n\n");
    }
  }

  if (i == 3) {
    printf("Error :( \n");
    exit(0);
  }

  do {
    printf ("Enter Your Money : ");
    scanf ("%d",&Money);
  } while ((Money < 100) || (Money >20000));
  
  if (Money/1000!=0) {
    Amount=Money/1000;
    Money=Money%1000;
    printf ("Banknote 1000 : %d\n",Amount);
  }
  if (Money/500!=0) {
    Amount=Money/500;
    Money=Money%500;
    printf ("Banknote 500 : %d\n",Amount);
  }
  if (Money/100!=0) {
    Amount=Money/100;
    Money=Money%100;
    printf ("Banknote 100 : %d\n",Amount);
  }
}