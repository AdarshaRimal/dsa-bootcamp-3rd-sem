## PREFIX EXPRESSION EVALUATION

###  Algorithm 

**Step 1:** Create empty stack  
**Step 2:** Scan expression from right to left  
**Step 3:** If operand → push  
**Step 4:** If operator:  

- Pop `operand1`  
- Pop `operand2`  
- Compute: `operand1 operator operand2`  
- Push result  

**Step 5:** Final pop gives the answer