## BFS Implementation (C-like Pseudocode)

```c
BFS(Graph G, int start)
{
    create queue Q

    for each vertex v
        visited[v] = 0

    visited[start] = 1
    enqueue(Q, start)

    while Q is not empty
    {
        u = dequeue(Q)
        print u

        for each adjacent vertex v of u
        {
            if visited[v] == 0
            {
                visited[v] = 1
                enqueue(Q, v)
            }
        }
    }
}