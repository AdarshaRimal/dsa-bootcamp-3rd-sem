## POSTFIX EXPRESSION EVALUATION

###  Algorithm 

**Step 1:** Create empty stack  
**Step 2:** Scan expression from left to right  
**Step 3:** If operand → push to stack  
**Step 4:** If operator:  

- Pop `operand2`  
- Pop `operand1`  
- Compute: `operand1 operator operand2`  
- Push result  

**Step 5:** After complete scan → pop final result  
**Step 6:** That is the answer