#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    struct node * lp ;
    int val;
    struct node * rp;
}node ;

// newNode() allocates a new node with the given data and NULL left and right pointers
node * newnode(int val){
    node * newnode = (node *)malloc(sizeof(node));
    newnode -> val = val;
    newnode -> lp = NULL;
    newnode -> rp = NULL;
    return (newnode);
}

int numberofleafs(node* root) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root->rp == NULL && root->lp == NULL){
        return 1;
    }
    else {
    int xl;
    int xr;
    xl = numberofleafs(root->lp);
    xr = numberofleafs(root->rp);
    return (xl + xr);
    }
    
}

int main() {
   node * root = newnode(1);
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
  printf("Leaf count of the tree is %d", numberofleafs(root));
   
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
