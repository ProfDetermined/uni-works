#include <stdio.h>

typedef struct node
{
  char data;
  node *next;
}slist;

void create(slist **list)
{
  *list = NULL;
}

int IsEmpty(slist *list)
{
  return (list == NULL);
}

void insert_front(char ins_value, slist **list)
{
    slist *n;
    n = new slist;
    n->data = ins_value;
    n->next = *list;
    
    if(IsEmpty(*list))
        *list = n;
    else
        *list = n;
}

void insert_end(char ins_value, slist **list)
{
  slist *n, *last;
  n = new slist;
  n->data = ins_value;
  n->next = NULL;

  if(IsEmpty(*list))
    *list = n;
  else{
    last = *list;
    while(last->next != NULL)
      last = last->next;
    last->next = n;
  }
}

void prntrav(slist *list)
{
  slist *t;
  t = list;
  printf("\n");
  while (t->next != NULL)
  {
    printf("%c->", t->data);
    t = t->next;
  }
  printf("%c end list", t->data);
}

void delete_front(slist **list){
	slist *p;
	p=*list;
	if(!(IsEmpty(p))){
		*list = p->next;
		delete(p);
	}
}

void delete_end(slist **list){
	slist *k, *prev;
	if(!(IsEmpty(*list))){
		k = *list;
		while(k->next != NULL){
			prev = k;
			k = k -> next;
		}
		delete(k);
		prev->next = NULL;
		k = prev;
	}
}

int main()
{
    slist *list;
    create(&list);
    insert_front('E', &list);
    insert_front('C', &list);
    if (IsEmpty(list))
        printf("List is empty!!");
    else
        printf("List has data.");
    prntrav(list);
    delete_front(&list);
    prntrav(list);
    insert_end('Z',&list);
    prntrav(list);
    delete_end(&list);
    prntrav(list);
    
    return 1;
}