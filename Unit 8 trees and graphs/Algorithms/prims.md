## Prim’s Algorithm for Minimum Spanning Tree (MST)

**Algorithm:** `Prim MST(G)`  

1. Select any starting vertex `s`.  
2. Put this vertex in a set `S`.  
3. Start with an empty edge set `T`.  
4. Find the minimum weight edge connecting a vertex in `S` to a vertex not in `S`.  
5. Add that edge to `T`.  
6. Add the new vertex to `S`.  
7. Repeat steps 4–6 until all vertices are included.  
8. The set `T` will contain the Minimum Spanning Tree (MST).