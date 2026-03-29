## Dijkstra’s Algorithm (Pseudocode)

```c
Dijkstra_Algorithm(G, w, s)
{
    for each vertex v ∈ V
        d[v] = ∞

    d[s] = 0

    S = ∅
    Q = V

    while (Q ≠ ∅)
    {
        u = Take minimum from Q and delete
        S = S ∪ {u}

        for each vertex v adjacent to u
            if d[v] > d[u] + w(u,v) then
                d[v] = d[u] + w(u,v)
    }
}