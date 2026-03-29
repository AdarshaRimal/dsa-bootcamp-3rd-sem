## BST Insert (Recursive)

```c
BST_Insert(root, key)
{
    if(root == NULL)
        return newNode(key);

    if(key < root->data)
        root->left = BST_Insert(root->left, key);

    else if(key > root->data)
        root->right = BST_Insert(root->right, key);

    return root;
}