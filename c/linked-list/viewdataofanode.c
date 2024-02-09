#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void find1(struct node *find , struct node *head){
    if (head == find){
        printf("%d",head->data);
    }
    
   // struct node * cur = head;
    while (head != NULL && head != find){
        head = head -> next;
    }
    
    if (head != NULL){
        printf("%d",head->data);
    }
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
    find1(third,head.next);
    

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
