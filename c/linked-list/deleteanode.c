#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// void findandadd(struct node *find , struct node *head , struct node *add){
//     while (head != NULL && head != find ) {
//         head = head->next; // Move to the next node till you find address of the one you want to find
//     }
//     add->next = head->next;
//     head->next = add;
// }

void delete(struct node* del , struct node **head){
    
    // If the node to be deleted is the head node
    if (*head == del) {
        *head = del->next;
        // free(del); Not freeing memomry cause already do so at the end of code
        return;
    }

    struct node* prev = *head;
    while (prev->next != NULL && prev->next != del) {
        prev = prev->next;
    }

    // If the node is not present in the list
    if (prev->next == NULL) {
        return;
    }

    // Adjust pointers to skip the node to be deleted
    prev->next = del->next;

    
    // free(del); Not freeing memomry cause already do so at the end of code
}
   

void view(struct node *head) {
    //struct node *current = head;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next; // Move to the next node
    }
    printf("\n");
}

int main() {
    // initializing nodes :
    struct node head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *forth;

    // allocating memory :
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    forth = (struct node*) malloc(sizeof(struct node));

    // data assign 
    head.data = 0; // creating a dummy 
    head.next = first;

    first->data = 10; // x->y = (*x).y
    first->next = second; 

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;
    
    forth->data = 40;
    forth->next = NULL;
 
    view(head.next);
   
    delete(first,&head.next);
   
    
    view(head.next);
    

  //  Free allocated memory
    free(first);
    free(second);
    free(third);
    free(forth);
    
    
    // Avoiding dangling pointers
    first = NULL;
    second = NULL;
    third = NULL;
    forth = NULL;
    head.next = NULL;
    return 0;
}
