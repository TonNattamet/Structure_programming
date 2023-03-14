#include<stdio.h>

typedef struct
{
    int array[10];
    int top ;
}Stack;

void push(Stack* stack1)
{
    int n ;
    if((*stack1).top == (10-1)){printf("Stack Full\n");}
    else
    {
        printf("Please input data: ");
        scanf("%d",&n);
        (*stack1).top = (*stack1).top + 1 ;
        (*stack1).array[(*stack1).top] = n ;
    }
}

void pop(Stack* stack1)
{
    int n ;
    if((*stack1).top == -1){printf("Stack is empty\n");}
    else
    {
        n = (*stack1).array[(*stack1).top];
        printf("Data is : %d\n",(*stack1).array[(*stack1).top]);
        (*stack1).top = (*stack1).top - 1 ;
    }
}

int main()
{
    char opr;
    Stack stack ;
    stack.top = -1 ;
    while(1)
    {
        printf("Please select operation: ");
        scanf("%s",&opr);
        if(opr == 'P'){push(&stack);}
        else if (opr == 'X'){pop(&stack);}
        //else if(opr=='G'){exit(0);}
    }
}
