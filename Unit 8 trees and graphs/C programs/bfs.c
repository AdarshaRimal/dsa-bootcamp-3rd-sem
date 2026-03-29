#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;
int visited[MAX];
int adj[MAX][MAX]; // adjacency matrix
int n; // number of vertices

void enqueue(int v) {
    if(rear == MAX - 1) return;
    if(front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if(front == -1) return -1;
    int v = queue[front];
    if(front == rear) front = rear = -1;
    else front++;
    return v;
}

void BFS(int start) {
    int i;
    for(i = 0; i < n; i++)
        visited[i] = 0;

    visited[start] = 1;
    enqueue(start);

    while(front != -1) {
        int u = dequeue();
        printf("%d ", u);

        for(i = 0; i < n; i++) {
            if(adj[u][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
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

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS traversal: ");
    BFS(start);

    return 0;
}