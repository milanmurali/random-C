#include<stdio.h>
#include<conio.h>
#define size 20
int stack [size],top=-1;
void display ();
void main()
{
	int ch;
	void push();
	void pop();
	clrscr();
	printf("stack operation using array:\n\n");
	do
	{
		printf("menu \n 1.push \n 2.pop \n 3.exit");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:exit(0);
			default:printf("invalid choice");
		}
	}while(ch!=3);
	getch();
}
void push()
{
	int x;
	if(top==size)
	{
		printf("stack is full");
		getch();
		exit(0);
	}
	printf("enter the item to be inserted:");
	scanf("%d",&x);
	top=top+1;
	stack[top]=x;
	display();
}
void pop()
{
	int x;
	if(top==-1)
	{
		printf("stack is empty");
		getch();
		exit(0);
	}
	x=stack[top];
	printf("element removed is %d",x);
	top=top-1;
	display();
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("empty stack");
		getch();
		exit(0);
	}
	printf("\n stack is :");
	for(i=top;i>=0;i--)
	{
		printf("\t%d",stack[i]);
	}
}