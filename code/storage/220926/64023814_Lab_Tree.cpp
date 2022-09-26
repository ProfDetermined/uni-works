#include<stdio.h>
#include<conio.h>

typedef struct node{
	int data;
	node *left;
	node *right;
}nodeTree;

typedef struct{
	nodeTree *root;
	int cnt;
}tree;

// ******************************************************************

//		               		   Stack for tree

// ******************************************************************

typedef struct nodeStack{
	nodeTree *tnode;
	nodeStack *next;
}stack;

int mtCheck(stack *st)
{
	return(st==NULL);
}

void createStack(stack **st)
{
	stack *p;
	p=NULL;
	*st=p;
}

void push(nodeTree *push_v,stack **st)
{
	stack *p,*tp;

	p=new stack;
	p->tnode=push_v;

	tp=*st;
	if(mtCheck(tp))
	{
		p->next=NULL;
	}else
	{
		p->next=tp;
	}
	*st=p;
}

void pop(nodeTree **pop_v,stack **st)
{
	stack *p;

	p=*st;

	if(!mtCheck(p))
	{
		*pop_v=p->tnode;
		*st=p->next;
		delete p;
	}
}

void clear_st(stack **st)
{
	stack *p;
	nodeTree *tr;
	p=*st;
	while(p!=NULL)
	{
		pop(&tr,&p);
	}
	*st=p;
}

// ******************************************************************

//									 			End of stack part

// ******************************************************************

int IsEmpty(tree *t)
{
	return(t->root==NULL);
}

void create_tree(tree **newtree)
{
	*newtree=new tree;
	(*newtree)->root=NULL;
	(*newtree)->cnt=0;
}

void Insert_BST(int ins_v,tree *t)
{
	nodeTree *p,*prev,*tp;
	//int h;

	p=new nodeTree;
	p->data=ins_v;
	p->left=NULL;
	p->right=NULL;

	if(IsEmpty(t))
	{
		t->root=p;
		t->cnt=1;
	}else
	{
		tp=t->root;

		while(tp!=NULL)
		{
			prev=tp;

			if(p->data==tp->data) // Insert Exists Value
			{
				printf("\nValue %d Already Exists",p->data);
				tp=NULL;
			}else if(p->data>tp->data) // More value go Right
			{
				tp=tp->right;
			}else // Less value go Left
			{
				tp=tp->left;
			}
		}

		if(p->data>prev->data) //Insert More value right
		{	prev->right=p;
			t->cnt++;
		}else if(p->data<prev->data) //Insert Less value left
		{	prev->left=p;
			t->cnt++;
		}
	}
}

void Delete_BST(int del_v,tree *t)
{
	nodeTree *p,*prev,*tp;
	int tmp;
	if(IsEmpty(t))
	{
		printf("\nEmpty Tree");
	}else
	{	p=t->root;
		while((p!=NULL)&&(p->data!=del_v))
		{	prev=p;
			if(p->data<del_v) p=p->right;
			else p=p->left;
		}
		if(p==NULL)
		{
			printf("\nNot found %d in tree.",del_v);
		}else
		{
			if((p->left==NULL)&&(p->right==NULL)) //leaf node
			{
				if(p==t->root)
					t->root=NULL;
				else
				{
					if(prev->data>del_v) prev->left=NULL;
					else prev->right=NULL;
				}
				delete p;
				t->cnt--;
			}else if((p->left==NULL)||(p->right==NULL)) // single child node
			{
				if(p==t->root)
				{
					if(p->right==NULL) t->root=p->left;
					else t->root=p->right;
				}else
				{
					if(prev->data>del_v)
						if(p->right==NULL) prev->left=p->left;
						else prev->left=p->right;
					else
						if(p->right==NULL) prev->right=p->left;
						else prev->right=p->right;
				}
				delete p;
				t->cnt--;
			}else //two children node
			{
				tp=p->right;
				while(tp->left!=NULL);
				{	tp=tp->left; }
				tmp=tp->data;
				Delete_BST(tmp,t);
				t->cnt--;
				p->data=tmp;
			}
		}
	}
}

void inorder(nodeTree *tree)
{
	stack *st;
	nodeTree *p;
	createStack(&st);

	p=tree;
	do
	{
		while(p!=NULL)
		{
			push(p,&st);
			p=p->left;
		}
		if(!mtCheck(st))
		{
			pop(&p,&st);
			printf(" %d",p->data);
			p=p->right;
		}
	}while((p!=NULL)||(!mtCheck(st)));

}

void preorder(nodeTree *tree)
{
	stack *st;
	nodeTree *p;
	createStack(&st);

	p=tree;
	do
	{
		while(p!=NULL)
		{
			printf(" %d",p->data);
			push(p,&st);
			p=p->left;
		}
		if(!mtCheck(st))
		{
			pop(&p,&st);
			p=p->right;
		}
	}while((p!=NULL)||(!mtCheck(st)));
}

void inorderre(nodeTree *tree)
{
	if(tree!=NULL)
	{
		inorderre(tree->left);
		printf(" %d",tree->data);
		inorderre(tree->right);
	}
}

void preorderre(nodeTree *tree)
{
	if(tree!=NULL)
	{
		printf(" %d",tree->data);
		preorderre(tree->left);
		preorderre(tree->right);
	}
}

void reinorder(nodeTree *tree)
{
	if(tree!=NULL)
	{
		reinorder(tree->right);
		printf(" %d",tree->data);
		reinorder(tree->left);
	}
}

void postorderre(nodeTree *tree)
{
	//Postorder code
	if(tree!=NULL)
	{	postorderre(tree->left);
		postorderre(tree->right);
		printf(" %d",tree->data);
	}
}


int main(void)
{
	tree *b;
	create_tree(&b);

	printf("\nInsert 3 8 5 4 7 9 2 1 to BST");

	Insert_BST(3,b);
	Insert_BST(8,b);
	Insert_BST(5,b);
	Insert_BST(4,b);
	Insert_BST(7,b);
	Insert_BST(9,b);
	Insert_BST(2,b);
	Insert_BST(1,b);


	printf("\nDelete 4 1 6 from BST");

	Delete_BST(4,b);
	Delete_BST(1,b);
	Delete_BST(6,b);

	printf("\nTraverse Inorder :");
	inorder(b->root);

	printf("\nTraverse Preorder :");
	preorder(b->root);

	printf("\nTraverse Postorder :");
	postorderre(b->root);

	//printf("\nTraverse Postorder recursive :");
	//postorderre(b->root);
	return 1;

}
