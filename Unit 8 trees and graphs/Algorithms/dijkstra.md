## Dijkstra’s Algorithm for Shortest Path

**Algorithm:** `Dijkstra(G, s)`  

1. Set the distance of all vertices to infinity.  
2. Set the distance of source vertex `s` = 0.  
3. Put all vertices into a set `Q`.  
4. Select the vertex with the minimum distance from `Q`.  
5. Remove that vertex from `Q`.  
6. Update distances of all adjacent vertices.  
7. If a shorter path is found, update the distance.  
8. Repeat steps 4–7 until all vertices are processed.