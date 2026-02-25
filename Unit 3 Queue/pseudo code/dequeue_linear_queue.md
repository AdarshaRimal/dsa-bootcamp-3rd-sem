### DEQUEUE Function (C Code)

```
int dequeue()
{
    if (rear < front)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    int item = queue[front];
    front = front + 1;
    return item;
}
```