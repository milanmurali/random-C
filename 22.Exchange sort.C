#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,temp,n;
	clrscr();
	printf("Enter the no.of elments: ");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=(i+1);j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}