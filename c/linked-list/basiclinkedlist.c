#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void view(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next; // Move to the next node
    }
}

int main() {
    // initializing nodes :
    struct node head;
    struct node *first;
    struct node *second;
    struct node *third;

    // allocating memory :
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // data assign 
    head.data = 0; // creating a dummy 
    head.next = first;

    first->data = 10; // x->y = (*x).y
    first->next = second; 

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    view(head.next);

    // Free allocated memory
    free(first);
    free(second);
    free(third);
    
    // Avoiding dangling pointers
    first = NULL;
    second = NULL;
    third = NULL;
    head.next = NULL;
    return 0;
}
