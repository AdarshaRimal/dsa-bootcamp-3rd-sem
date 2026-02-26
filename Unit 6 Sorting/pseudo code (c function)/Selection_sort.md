```c
void SelectionSort(int arr[], int n) 
{
    int i, j, min_index, temp;
    for (i = 0; i < n - 1; i++) // passes
    {
        min_index = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_index]) 
            {
                min_index = j;
            }
        }
        // Swap logic
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
```