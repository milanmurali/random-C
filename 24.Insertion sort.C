#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],key,n,i,j;
	clrscr();
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d numbers: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(key<a[j]&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}