## DFS Recursive Algorithm (Pseudocode)

```c
DFS(G, s)
{
    T = {s};
    Traverse(s);
}

Traverse(v)
{
    for each w adjacent to v and not yet in T
    {
        T = T ∪ {w};    // include edge {v, w} as well
        Traverse(w);
    }
}