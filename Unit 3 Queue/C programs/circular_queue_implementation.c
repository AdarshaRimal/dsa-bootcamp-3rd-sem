#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == (rear + 1) % MAX)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = x;
}

int dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int item = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    return item;
}

void display()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
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

    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();

    return 0;
}