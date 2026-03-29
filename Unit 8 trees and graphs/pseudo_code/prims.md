## Prim’s Algorithm (Pseudocode)

```c
Prim MST(G)
{
    T = ∅;          // T is set of edges of MST
    S = {s};        // s is randomly chosen vertex

    while (S ≠ V)
    {
        e = (u,v) an edge of minimum weight incident to vertices in T
            and not forming simple circuit in T
            i.e., u ∈ S and v ∈ V − S

        T = T ∪ {(u,v)}

        S = S ∪ {v}
    }
}