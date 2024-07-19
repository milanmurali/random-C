#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[25][25], temp[25];
        int i,j,count;
        clrscr();
        printf("Enter the no.of string: \n");
        scanf("%d",&count);
        printf("Enter the string: \n");
        for(i=0;i<=count;i++)
        	gets(str[i]);
        for(i=0;i<=count;i++)
        {
        	for(j=i+1;j<=count;j++)
                {
                	if (strcmp(str[i],str[j])>0)
                        {
                        	strcpy(temp,str[i]);
                                strcpy(str[i],str[j]);
                                strcpy(str[j],temp);
                        }
                }
        }
	printf("\nSorted string is: ");
        for(i=0;i<=count;i++)
        	puts(str[i]);
        getch();
}

