## Deletion in Binary Search Tree (BST)

**Step 1:** Find the node to delete.  
**Step 2:** If the node is a leaf → delete directly.  
**Step 3:** If the node has one child → replace the node with its child.  
**Step 4:** If the node has two children:  
&nbsp;&nbsp;&nbsp;&nbsp;**a)** Find the inorder successor  
&nbsp;&nbsp;&nbsp;&nbsp;**b)** Copy the successor's value  
&nbsp;&nbsp;&nbsp;&nbsp;**c)** Delete the successor node  