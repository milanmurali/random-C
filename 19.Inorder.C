#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node*left;
    struct node*right;
};
struct node * create(int val)
{
    struct node*new;
    new=malloc(sizeof(struct node));
    new->key=val;
    new->left=NULL;
    new->right=NULL;
    return new;
}
struct node*insert(struct node*root,int val)
{
    if(root==NULL)
        return create(val);
    if(root->key<val)
        root->right=insert(root->right,val);
    if(root->key>val)
        root->left=insert(root->left,val);
    return root;
}
void inorder(struct node*root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->key);
    inorder(root->right);
}
void main()
{
    struct node* root=NULL;
    int data,len,i;
    clrscr();
    printf("enter the number of nodes:");
    scanf("%d",&len);
    printf("enter the %d nodes:\n",len);
    for(i=0;i<len;i++)
        {
        scanf("%d",&data);
        root=insert(root,data);
        }
    printf("inorder traversal of binary tree:\n");
    inorder(root);
    getch();
}