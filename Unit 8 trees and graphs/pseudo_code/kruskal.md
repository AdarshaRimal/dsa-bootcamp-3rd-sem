## Kruskal’s Algorithm (Pseudocode)

```c
Kruskal MST(G)
{
    T = {V}          // forest of n nodes
    S = set of edges stored in non-decreasing order of weight

    while (|T| < n-1 and E ≠ ∅)
    {
        select (u, v) from S in order
        Remove (u, v) from E

        if ((u, v) does not create a cycle in T)
        {
            T = T ∪ {(u, v)}    // Union of (u,v)
        }
    }
}