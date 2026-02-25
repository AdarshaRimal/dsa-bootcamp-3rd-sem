#include <stdio.h>

void TOH(int n, int source, int destination, int auxiliary)
{
    if(n > 0)
    {
        TOH(n-1, source, auxiliary, destination);
        printf("Move disk from %d to %d\n", source, destination);
        TOH(n-1, auxiliary, destination, source);
    }
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    TOH(n, 1, 3, 2);

    return 0;
}