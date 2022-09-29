/******** Searching Array List ********/

#include<stdio.h>
#include<conio.h>

#define max_data 10

typedef struct {
  int data[max_data];
  int count;
} sorted_list;

void create_list(sorted_list *l) {
  l->count=0;
}

void insert_list(int ins_data,sorted_list *l) {
  int i=0,j,c,temp;

  c=l->count;

  if(c==0) {
    l->data[0]=max_data;
    l->count++;
  } else if(c<max_data) {

    while(i<l->count) {
      temp=l->data[i];
      if(temp<ins_data)
        i++;
      else if(temp>ins_data) {
        for(j=c;j>=i;j--) {
          l->data[j+1]=l->data[j];
        }

        l->data[i]=ins_data;
        l->count++;
        i=l->count;
      } else {
        printf("\nCan't insert valid value %d",ins_data);
        i=max_data;
      }
    }

    if(c==i) {
      l->data[c]=ins_data;
      l->count++;
    }
  } else
    printf("\nCan't insert full list");
}

void print_list(sorted_list *l) {
  int i;
  printf("\nSorted List: ");
  for(i=0;i<l->count;i++) {
    printf(" %d",l->data[i]);
  }
}

int seq_search(int search_data,sorted_list *l) {
  int i=0, count=0, found_idx;

  while(i<l->count) {
    if(search_data>l->data[i]) {
      i++;
    } else if(search_data<l->data[i]) {
      found_idx=max_data;
      printf("\n Not found %d",search_data);
      i=l->count;
    } else {
      found_idx=i;
      i=l->count;
    }

    count++;
  }

  printf("\n Compare %d times Sequential Search",count);
  return(found_idx);
}

int bin_search(int search_data,sorted_list *l) {

  int count=0,found_idx=max_data,l_idx,r_idx,m_idx;
  l_idx=0; r_idx=l->count-1;
  while(l_idx<=r_idx) {
    m_idx=(l_idx+r_idx)/2;

    if(l->data[m_idx]<search_data) {
      l_idx=(m_idx+1);
    } else if(l->data[m_idx]>search_data) {
      r_idx=(m_idx-1);

    } else {
      l_idx=r_idx+1;
    }

    count++;
  }

  if(l->data[m_idx]==search_data)
    found_idx=m_idx;
  else
    printf("\n Not found %d",search_data);

  printf("\n Compare %d times Binary Search",count);
  return(found_idx);
}

int main(void) {
  sorted_list lst;
  int f;

  create_list(&lst);
  printf("\n------- Insert 2,1,4,3,5,2,7,8,10 --------");

  insert_list(2,&lst);
  insert_list(1,&lst);
  insert_list(4,&lst);
  insert_list(3,&lst);
  insert_list(5,&lst);
  insert_list(2,&lst);
  insert_list(7,&lst);
  insert_list(8,&lst);
  insert_list(10,&lst);

  print_list(&lst);
  
  printf("\n\n----------- Sequential Search ------------");
  f=seq_search(2,&lst);
  printf("\nSearch 2 index = %d",f);

  printf("\n\n----------- Binary Search ------------");
  f=bin_search(1,&lst);
  printf("\nSearch 1 index = %d",f);

  return 1;
}