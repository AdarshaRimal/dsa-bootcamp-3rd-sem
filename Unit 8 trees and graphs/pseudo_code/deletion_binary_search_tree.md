## BST Delete (Recursive)

```c
BST_Delete(root, key)
{
    if(root == NULL)
        return root;

    if(key < root->data)
        root->left = BST_Delete(root->left, key);

    else if(key > root->data)
        root->right = BST_Delete(root->right, key);

    else
    {
        if(root->left == NULL)
            return root->right;

        else if(root->right == NULL)
            return root->left;

        temp = Find_Min(root->right);

        root->data = temp->data;

        root->right = BST_Delete(root->right, temp->data);
    }

    return root;
}