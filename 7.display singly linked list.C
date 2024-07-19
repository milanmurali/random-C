#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
	int data;
	struct node*link;
}*start=NULL;
void main()
{
	int i,c=0,n;
	clrscr();
	 printf("Enter no.of nodes: ");
	 scanf("%d",&n);
	 while(c<n)
	 {
		create();
		c=c+1;
	 }
	 display();
	 getch();
}
struct node*new, *current;
void create()
{
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("Overflow");
		exit(0);
	}
	printf("Enter the data: ");
	scanf("%d",&new ->data);
	new -> link= NULL;
	if(start==NULL)
	{
		start=new;
		current=new;
	}
	else
	{
		current -> link=new;
		current=new;
	}
}
void display()
{
	for(current=start;current!=NULL;current=current -> link)
	printf("%d ->",current->data);
	printf("NULL");

	getch();
}