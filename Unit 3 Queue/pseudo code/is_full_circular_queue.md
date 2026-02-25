### isFull Function (Circular Queue - C Code)

```
int isFull()
{
    if (front == (rear + 1) % MAX)
        return 1;
    else
        return 0;
}
```