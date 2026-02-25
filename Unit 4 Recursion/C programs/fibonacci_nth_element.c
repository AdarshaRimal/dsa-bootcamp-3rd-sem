//fibonacci program to find nth element in C using recursion
#include <stdio.h>

int fibo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    printf("Enter position: ");
    scanf("%d", &n);

    printf("Fibonacci = %d", fibo(n));

    return 0;
}