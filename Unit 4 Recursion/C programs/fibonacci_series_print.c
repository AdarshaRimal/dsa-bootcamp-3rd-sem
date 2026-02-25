// fibonacci series print in C using recursion
// like 0, 1, 1, 2, 3, 5, 8, 13, ...
#include <stdio.h>

int fibo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else 
        return fibo(n - 1) + fibo(n - 2);
}

int main() 
{
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        printf("%d", fibo(i));
        if(i != num - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
