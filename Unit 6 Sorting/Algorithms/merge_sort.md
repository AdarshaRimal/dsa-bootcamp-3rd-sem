## MERGE SORT  

### Algorithm  

**Step 1:** Start with the array and define the left index `l` and right index `h`.  

**Step 2:** If `l < h`, find the middle index using:  
`mid = (l + h) / 2`.  

**Step 3:** Recursively divide the left half of the array from `l` to `mid`.  

**Step 4:** Recursively divide the right half of the array from `mid + 1` to `h`.  

**Step 5:** Compare elements from both halves and copy the smaller element into a temporary auxiliary array.  

**Step 6:** Continue comparing and copying until one half is completely traversed.  

**Step 7:** Copy any remaining elements from the left half into the auxiliary array.  

**Step 8:** Copy any remaining elements from the right half into the auxiliary array.  

**Step 9:** Copy the sorted elements from the auxiliary array back into the original array.  

**Step 10:** Repeat the process until the entire array is sorted.  

**Step 11:** End.  