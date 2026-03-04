## BINARY SEARCH

### Algorithm: Binary_Search(arr, n, key)

**Step 1:** Start  

**Step 2:** Set low = 0  

**Step 3:** Set high = n - 1  

**Step 4:** Repeat while low <= high  
- **Step 4.1:** mid = (low + high) / 2  
- **Step 4.2:** If arr[mid] == key  
  - Return mid  
- **Step 4.3:** If key < arr[mid]  
  - Set high = mid - 1  
- **Step 4.4:** Else  
  - Set low = mid + 1  

**Step 5:** Return -1  

**Step 6:** Stop