#include<stdio.h>

typedef struct node
{	float dat;
	node *next;
}slist;

void create(slist **p)
{
	*p=NULL;
}

int IsEmpty(slist *p)
{	return(p==NULL);
}

void insend(float insv,slist **p)
{	
	// Question 1.1 : 1.5 marks

	slist *n,*last;
	n=new slist;
	n->dat = insv;
	n->next = NULL;

	if(IsEmpty(*p)) {
		*p = n;
	} else {
		last = *p;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = n;
	}
}

void insfront(float insv,slist **p)
{	
	// Question 1.2 : 1.5 marks
	slist *n;
	n=new slist;
	n->dat = insv;
	n->next = *p;
	*p=n;
}

void prntrav(slist *p)
{	slist *t;
	t=p;
	printf("\n");
	while(t->next!=NULL)
	{
		printf("%f->",t->dat);
		t=t->next;
	}
	printf("%f end list",t->dat);
}
void delete_front(slist **list)
{	slist *d;
		if(!IsEmpty(*list))
	{	d=*list;
		*list=(*list)->next;
		delete d;
	}
}

void delslist_end(slist **p)
{	slist *t,*prev;
	if(!IsEmpty(*p)) 
	{	t=*p;
		while(t->next!=NULL)
		{	prev=t;
			t=t->next;
		}
		if(t==*p) *p=NULL;
		else prev->next=NULL;
		delete t;
	}
}

int main()
{	slist *A;
	create(&A);
	insend(3.2,&A);
	insend(1.3,&A);
	insend(2.2,&A);
	insfront(6.1,&A);
	insfront(7.7,&A);

	if(IsEmpty(A))	printf("List is empty!!");
	else	printf("List has data.");

	prntrav(A);
	
	delete_front(&A);
	prntrav(A);
	
	delslist_end(&A);
	prntrav(A);
	
	while(!IsEmpty(A)) delslist_end(&A);
	
	if(IsEmpty(A))	printf("\nList is empty!!");
	else	printf("\nList has data.");
	
	return 1;
}

