#include <stdio.h>

void insertionsort(int A[], int n) 
{
    int i, j, x;
    
    // Loop starting from index 1 (the "passes")
    for (i = 1; i < n; i++) 
    {
        j = i - 1;   // The index of the element before the current one
        x = A[i];    // Storing the current element to be inserted

        // While the previous element is greater than x, shift it to the right
        while (j > -1 && A[j] > x) 
        {
            A[j + 1] = A[j];
            j--;
        }
        
        // Insert x into its correct sorted position
        A[j + 1] = x;
    }
}

int main() {
    // Example array to sort
    int A[] = {12, 11, 13, 5, 6};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Original array: \n");
    for (int k = 0; k < n; k++) {
        printf("%d ", A[k]);
    }

    // Calling our function
    insertionsort(A, n);

    printf("\n\nSorted array: \n");
    for (int k = 0; k < n; k++) {
        printf("%d ", A[k]);
    }

    return 0;
}