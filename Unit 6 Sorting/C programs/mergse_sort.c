#include <stdio.h>

// 1. Merge function 
void Merge(int A[], int l, int mid, int h) 
{
    int i, j, k;
    int B[100]; // Auxiliary array
    
    i = l; 
    j = mid + 1; 
    k = l;

    // While i <= mid and j <= h
    while (i <= mid && j <= h) 
    {
        if (A[i] < A[j]) //
        {
            B[k] = A[i];
            k++;
            i++;
        } 
        else 
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }

    // Copy remaining elements of the first half
    for (; i <= mid; i++) 
    {
        B[k] = A[i];
        k++;
    }

    // Copy remaining elements of the second half
    for (; j <= h; j++) 
    {
        B[k] = A[j];
        k++;
    }

    // Copy merged elements back into original array A
    for (i = l; i <= h; i++) 
    {
        A[i] = B[i];
    }
}

// 2. MergeSort function 
void MergeSort(int A[], int l, int h) 
{
    int mid;
    if (l < h) //
    {
        mid = (l + h) / 2; // Floor division
        
        MergeSort(A, l, mid);       //
        MergeSort(A, mid + 1, h);   //
        Merge(A, l, mid, h);        //
    }
}

int main() {
    int data[] = {8, 2, 5, 3, 1, 4, 7, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);

    // Call MergeSort (indices 0 to n-1)
    MergeSort(data, 0, n - 1);

    printf("\nSorted array:   ");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    
    printf("\n");
    return 0;
}