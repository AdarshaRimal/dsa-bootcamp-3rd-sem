```c
void insertionsort(int A[], int n) 
{
    int i, j, x;
    for (i = 1; i < n; i++) // passes
    {
        j = i - 1;
        x = A[i];

        while (j > -1 && A[j] > x) 
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
```