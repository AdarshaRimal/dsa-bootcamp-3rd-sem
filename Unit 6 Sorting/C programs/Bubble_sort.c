#include <stdio.h>

void BubbleSort(int A[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) { // passes
        for (j = 0; j < n - 1 - i; j++) { // comparisons
            if (A[j] > A[j + 1]) {
                // Swap logic
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Original array: \n");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);

    // Calling our function
    BubbleSort(data, n);

    printf("\n\nSorted array: \n");
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    
    return 0;
}