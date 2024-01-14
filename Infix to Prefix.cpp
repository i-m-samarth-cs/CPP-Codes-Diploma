#include<stdio.h>
#include<conio.h>
#include<ctype.h>   // for isalnum()
#include<string.h>  // for strlen()

#define SIZE 50

struct STACK
{
    char a[SIZE];
    int top;
};

typedef struct STACK stack;

// stack functions
void initialize(stack *s);
void push(stack *s, char token);
char pop(stack *s);

int priority(char token);
void intopre(stack *s , char infix[]);

//main
int main()
{
    char infix[SIZE];

    stack s; // stack

    printf("\n\n Enter any infix expression : ");
    scanf("%s" , infix);

    intopre(&s,infix);

    getch();
}

// stack function definitions

//1.create stack
void initialize(stack *s)
{
    s->top=-1; // for empty stack
}

//2.insert
void push(stack *s,char token)
{
   if(s->top != SIZE-1)
   {
       s->top++;
       s->a[s->top]=token;
   }
}

//3.delete
char pop(stack *s)
{
    char token;

    if(s->top != -1)
    {
        token=s->a[s->top];
        s->top--;

        return token; // return the element which is poped
    }

    return 0;
}

//4.returns priority of instack & incoming
int priority(char token)
{
    int pri;

    switch(token)
    {
        case '^': pri=3;
                  break;

        case '*':
        case '/':
        case '%':  pri=2;
                   break;

        case '+':
        case '-':  pri=1;
                   break;

        default : pri=0;
    }

    return pri;
}

// Function to convert infix to prefix
void intopre(stack *s,char infix[])
{
    char prefix[SIZE],token;
    int i=0,j=0,length=0;

    //initially stack is empty
    initialize(s);

    push(s,'#');

    //length of given infix
    length=strlen(infix);

    //loops iterates length times
    // scan the infix from left to right
    for(i=length-1;i>=0;i--)
    {
        // mining token 1 by 1
        token=infix[i];

        if(token==')')
        {
            push(s,token);
        }
        else if(isalnum(token)) // operands
        {
            prefix[j]=token;
            j++;
        }
        else if(token=='(')
        {
            while(s->a[s->top] != ')')
            {
                prefix[j]=pop(s);
                j++;
            }

            s->top--; // delete ')'
        }
        else
        {
            // pop() untill incoming becomes greater than instack
            while(priority(s->a[s->top])>priority(token))
            {
                prefix[j]=pop(s);
                j++;
            }

            // push operator
            push(s,token);
        }
    }

// if scanning is completed and still operators are present in stack then pop() them and store into prefix.
    while((token=pop(s)) != '#')
    {
        prefix[j]=token;
        j++;
    }

    prefix[j]='\0';
    strrev(prefix);

    printf("\n\n The Prefix expression is : %s" , prefix);
}
