#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*front,*rear,*New,*null;
void enqueue();
void dequeue();
void display();
void main()
{
	int ch;
	clrscr();
	printf("Queue operation using linked list");
	do
	{
		printf("\n\nMenu\n 1.Enqueue\n 2.Dequeue\n 3.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:exit(0);
			default:printf("wrong choice\n");
		}
	}while(ch!=3);
}
void enqueue()
{
	int a;
	New=(struct node *)malloc(sizeof(struct node));
	if(New==null)
	printf("overflow");
	else
	{
		printf("\nEnter value:");
		scanf("%d",&a);
		New->data=a;
		if(front==null)
		{
			front=New;
			rear=New;
			front->next=null;
		}
		else
		{
			rear->next=New;
			rear=New;
			rear->next=null;
		}
	}
	display();
}
void display()
{
	struct node*New;
	New=front;
	if(front==null)
	printf("\nEmpty queue");
	else
	{
		printf("Queue is: \n");
		while(New!=null)
		{
			printf("%d->",New->data);
			New=New->next;
		}
		printf("null");
	}
}
void dequeue()
{
	if(front==null)
	printf("underflow");
	else
	{
		New=front;
		printf("\nDeleted element is: %d \n",New->data);
		front=front->next;
		free(New);
	}display();
}
