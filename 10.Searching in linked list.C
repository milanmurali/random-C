#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *link;
}*START=NULL;
void main()
{
    int n, count, pos, item, flag=0, c=0;
    struct node *New, *cur;
    clrscr();
    printf("Enter the number of data: ");
    scanf("%d", &n);
    while(c < n)
    {
	New = (struct node*)malloc(sizeof(struct node));
	if(New == NULL)
	{
	    printf("Overflow");
	    exit(0);
	}
	printf("Enter data: ");
	scanf("%d", &New->data);
	New->link = NULL;
	if(START == NULL)
	{
	    START = New;
	    cur = New;
	}
	else
	{
	    cur->link = New;
	    cur = New;
	}
	c=c+1;
    }
    for(cur=START;cur!=NULL;cur=cur->link)
    {
	printf("%d->", cur->data);
    }
    printf("NULL");
    printf("\nEnter the data to be searched: ");
    scanf("%d", &item);
    for(cur=START,pos=1;cur!=NULL;cur=cur->link,pos++)
    {
	if(cur->data == item)
	{
	    printf("Found at position: %d", pos);
	    flag++;
	    break;
	}
    }

    if(flag == 0)
    {
	printf("%d not found", item);
    }
    getch();
}