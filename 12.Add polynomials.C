#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10]={0},b[10]={0},c[10]={0};
	int m,n,i,p;
	void display(int[],int);
	clrscr();
	printf("Enter degree of the first polynomial: ");
	scanf("%d",&n);
	printf("Enter degree of second polynomial: ");
	scanf("%d",&m);
	printf("Enter the coeffients of 1st polynomial:\n");
	 for(i=n;i>=0;i--)
	 {
		scanf("%d",&a[i]);
	 }
	 printf("Enter the coeffients of 2nd polynomial:\n");
	 for(i=m;i>=0;i--)
	 {
		scanf("%d",&b[i]);
	 }
	 if(n>m)
	  p=n;
	 else p=m;
	 for(i=0;i<=p;i++)
	 c[i]=a[i]+b[i];
	 printf("\nFirst polynomial: ");
	 display(a,n);
	 printf("\nSecond polynomial: ");
	 display(b,m);
	 printf("\nResultant polynomial is: ");
	 display(c,p);
	 getch();
}
void display(int c[], int n)
{
	int i;
	for(i=n;i>=0;i--)
	{
		if(c[i]==0)
		 continue;
		if(i==0)
		 printf("%d",c[i]);
		else
		 printf("%dx^%d",c[i],i);
		if(i>0)
		 printf("+ ");
	}
}