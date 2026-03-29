
#include <stdio.h>

#define MAX 100

int adj[MAX][MAX]; // adjacency matrix
int visited[MAX];
int n; // number of vertices

void DFS(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for(i = 0; i < n; i++) {
        if(adj[v][i] && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS traversal: ");
    DFS(start);

    return 0;
}