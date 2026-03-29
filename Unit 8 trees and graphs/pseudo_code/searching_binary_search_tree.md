## BST Search (Iterative)

```c
BST_Search(root, key)
{
    while(root != NULL)
    {
        if(key == root->data)
            return root;

        else if(key < root->data)
            root = root->left;

        else
            root = root->right;
    }

    return NULL;
}