#include <stdio.h>
#include <ncurses.h> // using instead of conio.h

#define width 5
#define height 3

int main() {
  int sq[width][height];
  int n,m;

  for(n=0; n<height; n++) {
    for(m=0; m<width; m++) {
      sq[n][m] = (n+1) * (m+1);
      printf("square [%d][%d] = %d\n", n, m, sq[n][m]);
    }
  }
    
  return 0;
}