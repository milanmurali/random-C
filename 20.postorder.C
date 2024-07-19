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
	struct node * newnode;
	newnode=malloc(sizeof(struct node));
	newnode ->key=val;
	newnode ->left=NULL;
	newnode ->right=NULL;
	return newnode;
}
struct node *insertnode(struct node *root,int val)
{
	if(root==NULL)
	return getnode(val);
	if(root ->key<val)
	root ->right=insertnode(root->right,val);
	if(root ->key>val)
	root ->left=insertnode(root->left,val);
	return root;
}
void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root ->left);
	postorder(root ->right);
	printf("%d",root ->key);
}
void main()
{
	struct node *root=NULL;
	int data,nodelen,i;
	clrscr();
	printf("\n enter the number of nodes :\n");
	scanf("%d",&nodelen);
	printf("enter %d data:\n",nodelen);
	for(i=0;i<nodelen;i++)
	{
		scanf("%d",&data);
		root=insertnode(root,data);
	}
	printf("\n postorder traversal of the binary tree:\n");
	postorder(root);
	getch();
}
