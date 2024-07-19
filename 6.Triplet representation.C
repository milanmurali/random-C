#include<stdio.h>
#include<conio.h>
#define size 20
void main()
{
	int a[10][10],r,c,i,j,count=0,sp[10][10],k=0;
	clrscr();
	printf("Enter the row: ");
	scanf("%d",&r);
	printf("Enter the column: ");
	scanf("%d",&c);
	printf("Enter the elements in the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		if(a[i][j]!=0)
		count++;
	}
	if(count>=(r*c)/2)
	{
		printf("It is not a sparse matrix");
	}
	else
	{
		sp[k][0]=r;
		sp[k][1]=c;
		sp[k][2]=count;
		k++;
		for(i=0;i<r;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]!=0)
				{
					sp[k][0]=i;
					sp[k][1]=j;
					sp[k][2]=a[i][j];
					k++;
				}
			}
		}
		printf("\n\nTriplet representation:\n");
		printf("\nRow\tColumn\tValues\n");
		for(i=0;i<=count;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",sp[i][j]);
			}
			printf("\n");
		}
	}
	getch();
}

