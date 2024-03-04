#include <stdio.h>
#include <stdlib.h>

typedef struct a {
    
    int val;
    struct a * next ;
}node;



void dup(node *head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    node *current = head;

    while (current != NULL) {
        node *runner = current;

        while (runner->next != NULL) {
            if (runner->next->val == current->val) {
                node *duplicate = runner->next;
                runner->next = runner->next->next;
                free(duplicate);
            } else {
                runner = runner->next;
            }
        }

        current = current->next;
    }
}


void print(node * head){
    if(head == NULL){
        return;
    }
    node * temp = head;
    while(temp!=NULL){
        printf("%d , %p\n",temp->val,&temp->val);
        temp = temp->next;
    }
}

int main() {
    node * one = (node *)malloc(sizeof(node));
    node * two = (node *)malloc(sizeof(node));
    node * three = (node *)malloc(sizeof(node));
    node * four = (node *)malloc(sizeof(node));
    node * five = (node *)malloc(sizeof(node));
    
    one->val = 1;
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 2;
    
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;
    
    print(one);
    dup(one);
    printf("\n");
    print(one);
    
    
    return 0;
}
