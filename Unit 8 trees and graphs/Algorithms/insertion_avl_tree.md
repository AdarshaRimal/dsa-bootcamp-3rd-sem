## Insertion in AVL Tree

**Step 1:** Insert the node like in a Binary Search Tree (BST).  
**Step 2:** Update the height of all ancestor nodes.  
**Step 3:** Calculate the Balance Factor (BF) of all ancestors.  
**Step 4:** If BF > 1 or BF < -1 → identify the rotation case:  
&nbsp;&nbsp;&nbsp;&nbsp;**a)** LL → Right Rotation  
&nbsp;&nbsp;&nbsp;&nbsp;**b)** RR → Left Rotation  
&nbsp;&nbsp;&nbsp;&nbsp;**c)** LR → Left + Right Rotation  
&nbsp;&nbsp;&nbsp;&nbsp;**d)** RL → Right + Left Rotation  
**Step 5:** Apply the required rotation.  
**Step 6:** Continue updating up to the root.