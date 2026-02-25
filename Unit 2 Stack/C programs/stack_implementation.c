//stack implementation in C using array
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

void peek()
{
    if(top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top Element = %d\n", stack[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    printf("Popped: %d\n", pop());
    peek();

    return 0;
}