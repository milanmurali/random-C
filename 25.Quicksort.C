#include<stdio.h>
#include<conio.h>
void quicksort(int num[25],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(num[i]<=num[pivot]&&i<last)
			i++;
			while(num[j]>num[pivot])
			j--;
			if(i<j)
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		temp=num[pivot];
		num[pivot]=num[j];
		num[j]=temp;
		quicksort(num,first,j-1);
		quicksort(num,j+1,last);
	}
}
void main()
{
	int i,count,num[25];
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&count);
	printf("Enter %d elements:\n",count);
	for(i=0;i<count;i++)
	scanf("%d",&num[i]);
	quicksort(num,0,count-1);
	printf("Order of sorted elements:");
	for(i=0;i<count;i++)
	printf("%d ",num[i]);
	getch();
}