## ENQUEUE (Circular Queue)

###  Algorithm 

**Step 1:** Check if queue is full  
**Step 2:** If yes, print `"Queue Overflow"` and stop  
**Step 3:** If queue is empty:  
- Set `front = rear = 0`  

**Step 4:** Else:  
- `rear = (rear + 1) % MAX`  

**Step 5:** Insert element at `queue[rear]`  
**Step 6:** Stop