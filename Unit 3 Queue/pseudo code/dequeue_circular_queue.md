### DEQUEUE Function (Circular Queue - C Code)

```
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
```