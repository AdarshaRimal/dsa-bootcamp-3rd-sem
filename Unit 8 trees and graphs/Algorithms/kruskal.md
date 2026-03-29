## Kruskal’s Algorithm for Minimum Spanning Tree (MST)

**Algorithm:** `Kruskal MST(G)`  

1. Start with a graph `G(V, E)`.  
2. Sort all edges of the graph in increasing order of weight.  
3. Start with an empty tree `T`.  
4. Select the smallest edge.  
5. Check if adding the edge creates a cycle.  
6. If no cycle, add the edge to `T`.  
7. If a cycle forms, discard the edge.  
8. Repeat steps 4–7 until `T` has `(V − 1)` edges.  
9. The resulting tree `T` is the Minimum Spanning Tree (MST).