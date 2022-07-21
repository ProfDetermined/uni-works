#include <stdio.h>
#include <math.h>

int main() {
  float inp_a[5], xbar, sum=0;
  int i;

  // Getting Input
  for (i=0; i<5; i++){
    printf("Enter #%d Number : ", i+1);
    scanf("%f", &inp_a[i]);

    xbar = xbar + inp_a[i];
  }

  // Calculating X-bar
  xbar = xbar / i;

  // Finding SD
  for (i=0; i<5; i++) {
    sum = sum + ((inp_a[i] - xbar) * (inp_a[i] - xbar));
  }

  sum = sum / i;
  sum = sqrt(sum);

  printf("\n\n\tSD = %.2f\n", sum);
  
  return 0;
}