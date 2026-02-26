#include <stdio.h>

void SelectionSort(int arr[], int n) 
{
    int i, min_index, j, temp; 
    
    for (i = 0; i < n - 1; i++) // passes
    {
        min_index = i; //
        for (j = i + 1; j < n; j++) // j = i + 1 for comparing with next right element
        {
            if (arr[j] < arr[min_index]) 
            {
                min_index = j; 
            }
        }
        
        // Swap logic using temporary variable
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int data[] = {64, 25, 12, 22, 11};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Before Selection Sort: ");
    for (int k = 0; k < n; k++) printf("%d ", data[k]);

    SelectionSort(data, n);

    printf("\nAfter Selection Sort:  ");
    for (int k = 0; k < n; k++) printf("%d ", data[k]);

    return 0;
}