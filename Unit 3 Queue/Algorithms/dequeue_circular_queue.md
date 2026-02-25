## DEQUEUE (Circular Queue)

### ✅ Algorithm (Step Language)

**Step 1:** Check if queue is empty  
**Step 2:** If yes, print `"Queue Underflow"` and stop  
**Step 3:** Else, store `queue[front]` in `ITEM`  
**Step 4:** If `front == rear`:  
- Set `front = rear = -1`  

**Step 5:** Else:  
- `front = (front + 1) % MAX`  

**Step 6:** Return the deleted `ITEM`  
**Step 7:** Stop