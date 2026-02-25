## TOWER OF HANOI

###  Algorithm

**Step 1:** Check if `n > 0`  
- If yes:  
  - Call `TOH(n-1, source, auxiliary, destination)`  
  - Print `"Move disk from", source, "to", destination"`  
  - Call `TOH(n-1, auxiliary, destination, source)`  

**Step 2:** End