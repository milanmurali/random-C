#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*start=NULL;
void main()
{
	int n,c=0;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d",&n);
	while(n>c)
	{
		create();
		c=c+1;
	}
	display();
	getch();
}
struct node *New, *current, *temp;
void create()
{
	New=(struct node*)malloc(sizeof(struct node));
	if(New==NULL)
	{
		printf("Overflow");
		exit(0);
	}
	printf("Enter data: ");
	scanf("%d",&New->data);
	New->next=NULL;
	if(start==NULL)
	{
		New->prev=NULL;
		start=New;
		current=New;
	}
	else
	{
		current->next=New;
		New->prev=current;
		current=New;
	}
}
void display()
{
	for(current=start;current!=NULL;current=current->next)
	{
		printf("%d->",current->data);
		temp=current;
	}
	printf("NULL");
	printf("\n");

	for(current=temp;current!=NULL;current=current->prev)
	{
		printf("%d->",current->data);
	}
	printf("NULL");
}