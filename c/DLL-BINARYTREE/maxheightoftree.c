#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int val;
    struct node *rp;
} node;

// Function to find the maximum of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to create a new node with the given value
node *newnode(int val) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->val = val;
    newnode->lp = NULL;
    newnode->rp = NULL;
    return (newnode);
}

// Function to calculate the height of a binary tree
int heightoftree(node *root) {
    // Base case: If the current node is NULL, return 0
    if (root == NULL) {
        return 0;
    }

    // Base case: If the current node is a leaf, return 1
    if (root->rp == NULL && root->lp == NULL) {
        return 1;
    } else {
        // Recursive calls to find the height of the left and right subtrees
        int xl = heightoftree(root->lp);
        int xr = heightoftree(root->rp);
        
        // Calculate the maximum height and add 1 for the current node
        int m = max(xl, xr);
        return (1 + m);
    }
}

int main() {
    // Creating a binary tree
    node *root = newnode(1);
    /* following is the tree after above statement
        1
       /  \
     NULL NULL
    */
    root->lp = newnode(2);
    root->rp = newnode(3);
    /* 2 and 3 become left and right children of 1
            1
           / \
          2   3
         / \ / \
    NULL NULL NULL NULL
    */
    root->lp->lp = newnode(4);
    root->lp->rp = newnode(5);
     /* 4 and 5 becomes left child of 2 
         1
        / \
       2   3
      /  \ / \
     4   5  NULL NULL
     /   \
    NULL NULL
    */
    root->rp->lp = newnode(6);
    root->rp->rp = newnode(7);
     /* 6 and 7 becomes left child of 3
         1
        / \
       2   3
      /  \ /  \
     4   5 6  7
     /   \  /   \
    NULL NULL NULL NULL
    */
    root->rp->rp->rp = newnode(8);
    root->rp->rp->lp = newnode(9);
    /* 8 and 9 become child of 7
        1
       / \
      2   3
     / \ / \
    4  5 6  7
           / \
          9   8

    */

    // Print the height of the tree
    printf("Max Height = %d\n", heightoftree(root));

    // Free the allocated memory to avoid memory leaks
    free(root->rp->rp->rp);
    free(root->rp->rp->lp);
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);

    return 0;
}
