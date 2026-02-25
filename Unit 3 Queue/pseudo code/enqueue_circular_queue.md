### ENQUEUE Function (Circular Queue - C Code)

```
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
```