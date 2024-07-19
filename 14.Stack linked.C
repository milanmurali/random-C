#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void push();
void pop();
struct node
{
	int data;
	struct node *next;
	}*top=NULL,*new;
void main()
{
	int ch;
	clrscr();
	printf("stack operation using linked list \n");
	while(ch!=3)
	{
		printf("\n menu \n1.push \n2.pop \n3.display \n4.exit\n");
		printf("enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("invalid choice");
		}
	}
	getch();
}
void push()
{
	struct node*new=(struct node*)malloc(sizeof(struct node));
	printf("enter the value:");
	scanf("%d",&new->data);
	if(top==NULL)
	{
	    top=new;
	    new ->next=NULL;
	}
	else
	{
	    new->next=top;
	    top=new;
	}
	
}
void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("underflow");
		getch();
		exit(0);
	}
	else
	{
		temp=top;
		printf("\n deleted element:%d",temp ->data);
		top=temp ->next;
		free(temp);
	}
	display();
}
void display()
{
	struct node*temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	{
		printf("%d",temp->data);
		printf("->");
	}
	printf("NULL");
	printf("\n");
	getch();
}