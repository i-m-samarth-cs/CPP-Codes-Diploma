#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define SIZE 50

Struct STACK
{
	int a[SIZE];
	int top;
};
typedef Struct STACK stack;
//Function Declaration
void initialize(stack *S);
void push(stack *S,int c);
int pop(stack *S);
int gettype(char c);
void eval(stack *S,char c,int n1,int n2);

void main()
{
	int num,n1,n2,type,i,length;
	char postfix[SIZE];
	
	Stack S;
	
	inintialize(&S);
	printf("\n Enter the Postfix Expression:");
	scanf("%s",postfix);
	length=strlen(postfix);
	//Evaluation
	for(i=0;i<length;i++)
	{
		type=gettype(postfix[i]);
		switch(type)
		{
			case 1:num=postfix[i]='\0';
				   push(&S,num);
				   
			case 2:n1=pop(&S);
				   n2=pop(&S);
				   
				   eval(&S,postfix[i],n1,n2);
				   break;
		}
	}
	printf("\n Result:%d",pop(&S));
	
	getch();
}
//Function Defination
void initialize(stack *S)
{
	s->top=-1;
}
void push(stack *S,int c)
{
	if(S->top!=SIZE-1)
	{
		S->top++;
		S->a[s->top]='(';
	}
}
int pop(stack *S)
{
	int operand;
	if(S->top!=-1)
	{
		operand=S->a[S->top];
		S->top--;
		return operand;
	}
}
int gettype(char token)
{
	switch(token)
	{
		case'^':
		case'*':
		case'/':
		case'%':
		case'+':
		case'-':return 2;
			
		default:return 1;
	}
}
void eval(stack *S,char c,int n1,int n2)
{
	int ans;
	switch(c)
	{
		case'^': ans pow(n2,n1);
				 break;
		case'*': ans=n2*n1;
				 break;
		case'/': ans=n2/n1;
				 break;
		case'%': ans=n2%n1;
				 break;
		case'+': ans=n2+n1;
				 break;
		case'-': ans=n2-n1;
				 break;	
	}
	push(S,ans);
}
