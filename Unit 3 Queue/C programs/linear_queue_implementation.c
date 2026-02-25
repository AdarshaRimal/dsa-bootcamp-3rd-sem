//linear queue implementation in C using array
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0;
int rear = -1;

void enqueue(int x)
{
    if (rear == MAX-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    rear++;
    queue[rear] = x;
}

int dequeue()
{
    if (rear < front)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue[front++];
}

void display()
{
    if (rear < front)
    {
        printf("Queue Empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    return 0;
}