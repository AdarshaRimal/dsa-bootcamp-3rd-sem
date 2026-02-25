## INFIX TO POSTFIX

###  Algorithm

**Step 1:** Create empty stack  
**Step 2:** Scan expression from left to right  
**Step 3:** If operand → add to output  
**Step 4:** If `'('` → push to stack  
**Step 5:** If `')'` → pop until `'('`  
**Step 6:** If operator:

While stack not empty AND `precedence(top) ≥ precedence(current)`  
→ pop to output  

Push current operator  

**Step 7:** After scanning complete → pop remaining operators  
**Step 8:** Output is postfix