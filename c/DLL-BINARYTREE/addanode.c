#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *lp;
    int val;
    struct node *rp;
} node;

// Function to print the linked list
void view(node *head) {
    if (head == NULL) {
        printf("NOTHING");
    } else {
        while (head->rp != NULL) {
            printf("%d , ", head->val);
            head = head->rp;
        }
        printf("%d", head->val);
    }
}

// Function to add a new node to the linked list
node *add(node *head, int y, int z) {
    node *r = (node *)malloc(sizeof(node));
    r->val = z;
    r->rp = NULL;
    r->lp = NULL;

    if (head == NULL) {
        printf("EMPTY");
    }

    node *q = head;
    if (q->val == y) {
        r->rp = q;
        q->lp = r;
        head = q;
        return r;
    } else {
        node *p = head;
        while (p != NULL && p->val != y) {
            p = p->rp;
        }
        if (p->rp != NULL) {
            r->rp = p->rp;
            r->lp = p->lp->rp;
            p->rp = r;
            r->rp->lp = r;
        } else {
            r->lp = p;
            p->rp = r;
        }
        return head;
    }
}

int main() {
    // Initializing nodes
    node *one;
    node *two;
    node *three;
    node *four;

    // Allocating memory
    one = (node *)malloc(sizeof(node));
    two = (node *)malloc(sizeof(node));
    three = (node *)malloc(sizeof(node));
    four = (node *)malloc(sizeof(node));

    // Data assignment
    one->lp = NULL;
    one->val = 1;
    one->rp = two;

    two->lp = one;
    two->val = 2;
    two->rp = three;

    three->lp = two;
    three->val = 3;
    three->rp = four;

    four->lp = three;
    four->val = 4;
    four->rp = NULL;

    // Adding a new node to the linked list
    node *result = add(one, 2, 5);

    // Displaying the modified linked list
    view(result);

    // Freeing the allocated memory to avoid memory leaks
    free(one);
    free(two);
    free(three);
    free(four);

    // Avoiding dangling pointers
    one, two, three, four = NULL, NULL, NULL, NULL;

    return 0;
}
