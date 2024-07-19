#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *left;
	struct node *right;
};
struct node *create(int val)
{
	struct node *New;
	New= malloc(sizeof(struct node));
	New -> key=val;
	New ->left=NULL;
	New ->right =NULL;
	return New;
}
struct node *insert(struct node *root, int val)
{
	if(root==NULL)
	return create(val);
	if(root ->key<val)
	 root->right=insert(root->right,val);
	if(root->key>val)
	 root->left=insert(root->left,val);
	return root;
}
void preorder(struct node *root)
{
	if(root==NULL)
	 return;
	printf("%d\t",root->key);
	preorder(root->left);
	preorder(root->right);
}
void main()
{
	struct node *root=NULL;
	int data,len,i;
	clrscr();
	printf("Enter no.of nodes:");
	scanf("%d",&len);
	printf("Enter %d nodes:\n",len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&data);
		root=insert(root,data);
	}
	printf("Preorder traversal of binary tree:\n");
	preorder(root);
	getch();
}