#include<stdio.h>
#include<conio.h>
void main()
{
	int a1[50],a2[50],m,n,i,j;
	clrscr();
	printf("Enter Size of first array: ");
	scanf("%d",&m);
	printf("Enter Elements:\n");
	for(i=0; i<m; i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter Size of second array : ");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=m,j=0; j<n;j++,i++)
	{
		a1[i]=a2[j];
	}
	printf("The new array after merging is :\n");
	for(i=0; i<m+n; i++)
	{
		printf("%d\t",a1[i]);
	}
	getch();
}