### PUSH Operation (Pseudocode)

```
PUSH(STACK, TOP, MAX, ITEM)
{
    if (TOP == MAX - 1)
        print "Overflow";
    else
    {
        TOP = TOP + 1;
        STACK[TOP] = ITEM;
    }
}
```