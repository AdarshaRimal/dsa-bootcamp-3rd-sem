### PEEK Function (Circular Queue - C Code)

```
int peek()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return -1;
    }

    return queue[front];
}
```