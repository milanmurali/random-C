#define SIZE 50
#include<ctype.h>
#include<stdio.h>
int s[SIZE];
int top=-1;
 void push(float elem)
 {
     s[++top]=elem;

 }
 float pop()
 {
     return(s[top--]);
 }

 void main()
 {
     char p[50],ch;
     float op1,op2;
     int i=0;
     clrscr();
     printf("Enter postfix expression:\n");
     scanf("%s",&p);
     while((ch=p[i++])!='\0')
     {
       if(isdigit(ch))
       push(ch-'0');
       else{
	   op2=pop();
	   op1=pop();
	   switch(ch)
	   {
	       case'+':push(op1+op2);break;
	       case'-':push(op1-op2);break;
	       case'*':push(op1*op2);break;
	       case'/':push(op1/op2);break;

	   }
       }

     }
     printf("\nGiven postfix expression is:%s",p);
     printf("\nResult after evaluation : %d",s[top]);
     getch();
 }