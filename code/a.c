#include <stdio.h>
#include <math.h>
#include <ncurses.h> // Using instead of conio.h

void insfront(char insv, slist **p)
{
	slist *n;
	n=new slist;
	n->data=insv;
	n->next=*p;
	*p=n;
}

int main() {
  
  
  return 0;
}