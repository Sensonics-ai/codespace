bool search(node *tree, int number) // search for a number in a tree

{
    if (tree == NULL)   // if the tree is empty...
    {
        return false;   // ... return false
    }
    else if (number < tree->number) // if the number is less than the number in the tree...
    {
        return search(tree->left, number);  // ... search the left subtree
    }
    else if (number > tree->number)     // if the number is greater than the number in the tree...
    {
        return search(tree->right, number);     // ... search the right subtree
    }
    else        // if the number is equal to the number in the tree...
    {
        return true;    // ... return true
    }
}
