#include<stdio.h>
#include<conio.h>
void main()
{
	int i,low,high,mid,n,key,a[25];
	clrscr();
	 printf("Enter no.of elements: \n");
	 scanf("%d",&n);
	 printf("Enter %d elements: \n",n);
	  for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	 printf("Enter value to find: \n");
	 scanf("%d",&key);
	 low=0;
	 high=n-1;
	 while(low<=high)
	 {
		mid=(low+high)/2;
		if(a[mid]<key)
			low=mid+1;
		else if(a[mid]==key)
		{

			printf("\n%d found at location %d", key,mid+1);
			break;
		}
		else
		 high=mid-1;
	 }
	 if(low>high)
	  printf("%d is not  found",key);

	 getch();
}
