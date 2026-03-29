## BFS Algorithm (Step-by-Step)

**Algorithm:** `BFS(G, start)`  

1. Create an empty queue `Q`.  
2. Mark all vertices as unvisited.  
3. Mark the start vertex as visited.  
4. Insert the start vertex into the queue.  
5. Repeat until the queue is empty:  
&nbsp;&nbsp;&nbsp;&nbsp;a) Remove the front vertex from the queue.  
&nbsp;&nbsp;&nbsp;&nbsp;b) Visit that vertex.  
&nbsp;&nbsp;&nbsp;&nbsp;c) Add all unvisited adjacent vertices to the queue and mark them as visited.  