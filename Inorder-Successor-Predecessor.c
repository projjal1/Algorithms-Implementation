//Finding inorder sucessor/predecessor in Cpp

#include<stdio.h>
#include<stdlib.h>

typedef struct nd 
{
	int data;
	struct nd *right;
	struct nd *left;
}bst;

int predecessor;
int succ_flag=0;

void insert(bst **root, int val)
{
 	bst *ptr=(bst*)malloc(sizeof(bst));
	ptr->data=val;
	ptr->right=NULL;
	ptr->left=NULL;
	
	if (*root==NULL)
		*root=ptr;
	else 
	{
		bst *cur=*root;
		bst *prev;
		while(cur!=NULL)
		{
			prev=cur;
			if (val > cur->data)
			{
				cur=cur->right;
			}
			else if (val < cur->data)
			{
				cur=cur->left;
			}
			else 
			{
				return ;
			}
		}
		
		if (prev->data > val)
			prev->left=ptr;
		else 
			prev->right=ptr;
	}
}

void inorder_pred(bst *root,int val)
{
	if(root!=NULL)
	{
		inorder_pred(root->left,val);
		
		if (val!=root->data)
			predecessor=root->data;
		else 
		{
			printf("%d",predecessor);
			return ;
		}
		
		inorder_pred(root->right,val);
	}
}

void inorder_succ(bst *root,int val)
{
	if(root!=NULL)
	{
		inorder_succ(root->left,val);
		
		if (val==root->data)
			succ_flag=1;
		else if (succ_flag==1)
		{
			printf("%d ",root->data);	
			succ_flag=0;	
			return ;	
		}
		
		inorder_succ(root->right,val);
	}
}

int main(void)
{
	bst *head=NULL;
	insert(&head,20);
	insert(&head,9);
	insert(&head,25);
	insert(&head,5);
	insert(&head,12);
	insert(&head,11);
	insert(&head,14);
	
	int no=20;
	printf("Inorder predecessor of %d is ",no);
	inorder_pred(head,no);
	printf("\n");
	printf("Inorder successor of %d is ",no);
	inorder_succ(head,no);
	
	return 0;
}
