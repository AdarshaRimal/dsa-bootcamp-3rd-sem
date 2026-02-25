### POP Operation (Pseudocode)

```
POP(STACK, TOP)
{
    if (TOP == -1)
        print "Underflow";
    else
    {
        ITEM = STACK[TOP];
        TOP = TOP - 1;
        return ITEM;
    }
}
```