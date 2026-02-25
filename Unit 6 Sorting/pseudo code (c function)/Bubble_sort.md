### BUBBLE SORT Function (C Code)

```
void BubbleSort(int A[], int n) 
{
    for (int i = 0; i < n - 1; i++) // passes
    {
        for (int j = 0; j < n - 1 - i; j++) // comparisons
        {
            if (A[j] > A[j + 1]) 
            {
                // Swap logic
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
```