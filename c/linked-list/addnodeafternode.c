#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void findandadd(struct node *find , struct node *head , struct node *add){
    while (head != NULL && head != find ) {
        head = head->next; // Move to the next node till you find address of the one you want to find
    }
    add->next = head->next;
    head->next = add;
}

// void add(int x,struct node *head,struct node *add){
//     // struct node *head = head;
//      while (head->next != NULL) { /* head != NULL will lead to segmentaion fault The issue causing a segmentation fault is that after the while loop, when head becomes NULL, you're attempting to access head->next, which leads to dereferencing a NULL pointer, resulting in undefined behavior and, in this case, a segmentation fault.*/
//         head = head->next; // Move to the next node
//     }
//     head->next = add;
//     add -> data = x;
//     add -> next = NULL;
    
// }

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
    third->next = NULL;
    
    forth->data = 40;
    forth->next = NULL;
// travesing and adding node at en of list 
    view(head.next);
    // int data4;
    // printf("\nTYPE DATA TO ADD : \n");
    // scanf("%d",&data4);
    // add(data4,head.next,forth);
    findandadd(first,head.next,forth);
    view(head.next);
    

    // Free allocated memory
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
