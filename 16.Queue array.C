#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

void delet();
void insert();
void display();

int q[MAX], rear = -1, front = -1;

void main()
{
    int ch;
    while (1)
    {
	printf("\n menu \n 1.push \n 2.pop \n 3.display \n 4.quit \n");
	printf("enter your choice:");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    insert();
	    break;
	case 2:
	    delet();
	    break;
	case 3:
	    display();
	    break;
	case 4:
	    exit(1);
	default:
	    printf("wrong choice \n");
	}
    }
}

void insert()
{
    int add;
    if (rear == MAX - 1)
	printf("overflow");
    else
    {
	if (rear == -1)
	    front = 0;
	printf("insert element in queue:");
	scanf("%d", &add);
	rear = rear + 1;
	q[rear] = add;
    }
}

void delet()
{
    if (front == -1 || front > rear)
    {
	printf("underflow");
	return;
    }
    else
    {
	printf("element deleted from queue is: %d\n", q[front]);
	front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1 || front > rear)
	printf("empty queue");
    else
    {
	printf("queue is:\n");
	for (i = front; i <= rear; i++)
	    printf("%d ", q[i]);
	printf("\n");
    }
}