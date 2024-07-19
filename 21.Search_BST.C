#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *left;
	struct node *right;
};
struct node *getnode(int val)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	newnode->key=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
		return getnode(val);
	if(root->key<val)
		root->right=insert(root->right,val);
	if(root->key>val)
		root->left=insert(root->left,val);
	return root;
}
void search(struct node *root,int item)
{
	if(root==NULL)
	{
		printf("item not found \n");
		return;
	}
	else if(item==root->key)
		printf("item found \n");
	else if(item<root->key)
	       search(root->left,item);
	else if(item>root->key)
	       search(root->right,item);
}
int main()
{
	struct node *root= NULL;
	int data,n,i,item;
	clrscr();
	printf("Enter the number of nodes:\n");
	scanf("%d",&n);
	printf("Enter %d nodes:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		root=insert(root,data);
	}
	printf("Enter the item to find:\n");
	scanf("%d",&item);
	search(root,item);
	getch();
	return 0;
}
