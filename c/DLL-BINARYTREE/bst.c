#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    struct node *lp;  // Pointer to the left child
    int val;          // Value of the node
    struct node *rp;  // Pointer to the right child
} node;

// newNode() allocates a new node with the given data and NULL left and right pointers
node *newnode(int val) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->val = val;
    newnode->lp = NULL;
    newnode->rp = NULL;
    return (newnode);
}

// Function to perform in-order traversal of the binary tree
int traverse(node *root) {
    if (root == NULL) {
        return (0);
    }
    traverse(root->lp);
    printf("%d ", root->val);
    traverse(root->rp);
}

// Function to perform binary search in the binary tree
bool bs(node *root, int search) {
    if (root == NULL) {
        return false;
    }
    if (search == root->val) {
        return (1);
    }
    if (search < root->val) {
        return bs(root->lp, search);
    }
    if (search > root->val) {
        return bs(root->rp, search);
    }
}

int main() {
    // Create a binary search tree
    node *root = newnode(8);
    /* following is the tree after above statement
        8
       /  \
     NULL NULL
    */
    
    root->lp = newnode(3);
    root->rp = newnode(10);
    /* 3 and 10 become left and right children of 8
            8
           / \
          3   10
         / \ / \
    NULL NULL NULL NULL
    */
    
    root->lp->lp = newnode(2);
    root->lp->rp = newnode(6);
    /* 2 and 6 become left child of 3 
         8
        / \
       3   10
      /  \ / \
     2   6  NULL NULL
     /   \
    NULL NULL
    */
    
    root->lp->rp->lp = newnode(4);
    /* 4 becomes left child of 6
         8
        / \
       3   10
      /  \ /  \
     2   6 NULL NULL
     /   \ 
    NULL  4
    */
    
    traverse(root);
    
    printf("\nENTER NUMBER TO SEARCH  : ");
    int a;
    scanf("%d", &a);
    
    if (bs(root, a)) {
        printf("\nYES ! , IT EXISTS");
    } else {
        printf("NAHHH");
    }

    // Free the allocated memory to avoid memory leaks
    free(root->rp->rp);
    free(root->rp->lp);
    free(root->lp->rp);
    free(root->lp->lp);
    free(root->rp);
    free(root->lp);
    free(root);

    return 0;
}
