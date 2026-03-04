## LINEAR SEARCH PROGRAM (C)

```c
int linearSearch(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;   // return index if found
        }
    }
    return -1;  // return -1 if not found
}