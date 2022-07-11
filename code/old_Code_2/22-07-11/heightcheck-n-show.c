#include <stdio.h>

int main() {
  int n, i, hRange[4] = {0,0,0,0};
  float avg, fullHeight = 0;

  printf ("Enter amount of student : ");
  scanf ("%d", &n);

  float height[n];

  for (i=0; i<n; i++) {
    printf("Enter your Height : ");
    scanf("%f", &height[i]);

    if (height[i] <= 160 && height[i] >= 0) {
      hRange[0]++;
    } else if (height[i] > 160 && height[i] <= 170) {
      hRange[1]++;
    } else if (height[i] > 170 && height[i] <= 180) {
      hRange[2]++;
    } else if (height[i] > 180 && height[i] <= 200) {
      hRange[3]++;
    } else {
      printf("Error");
      break;
    }

    fullHeight = fullHeight + height[i];
  }

  avg = fullHeight / n;

  printf("\n\n");

  printf("Amount of Student : %d\n\n", n);

  printf("In range of 0-160 : %d\n", hRange[0]);
  printf("In range of 161-170 : %d\n", hRange[1]);
  printf("In range of 171-180 : %d\n", hRange[2]);
  printf("In range of 181-200 : %d\n\n", hRange[3]);

  printf("All student's avarage height : %.2f\n\n", avg);

  printf("ALL OF STUDENT HEIGHT : \n\n");
  for (i = 0; i < n; i++)
  {
    printf("Student %d's height : %.2f\n", i+1, height[i]);
  }
  
  printf("\n\n");
  return 0;
}