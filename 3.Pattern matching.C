#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 	char text[20],pat[20];
        int a,b,flag=0,i,j;
        clrscr();
        printf("Enter the string:");
        gets(text);
        printf("Enter pattern to find:");
        scanf("%s",&pat);
        a=strlen(pat);
        b=strlen(text);
        for(i=0;i<=b-a;i++)
         {
         	for(j=0;j<a;j++)
                	if(text[i+j]!=pat[j])
                break;
                if(j==a)
                 {
                 	printf("Pattern found at %d",i+1);
                       flag++;
                        break;
                 }
         }
        if(flag==0)
        	printf("not found");
        getch();
 }



