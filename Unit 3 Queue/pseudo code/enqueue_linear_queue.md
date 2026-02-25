### ENQUEUE Function (C Code)

```
void enqueue(int x)
{
    if (rear == MAX-1)
    {
        printf("Queue Overflow\n");
        return;
    }

    rear = rear + 1;
    queue[rear] = x;
}
```