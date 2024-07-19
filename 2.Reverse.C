#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *s;
	int len,i;
	clrscr();
	printf("Enter the string:\n");
	gets(s);
	len=strlen(s);
	printf("The reverse of the string:\n");
	for(i=len;i>=0;i--)
 	{
	 	printf("%c",*(s+i));
 	}
 	getch();
}