### PEEK Function (C Code)

```
int peek()
{
    if (rear < front)
    {
        printf("Queue Empty\n");
        return -1;
    }

    return queue[front];
}
```