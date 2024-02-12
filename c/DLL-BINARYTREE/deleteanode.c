#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    struct node * lp ;
    int val;
    struct node * rp;
}node ;


void view(node * head){
    if (head == NULL){
        printf("NOTHING");
    }
    else {
        while (head->rp != NULL){
            printf("%d , ",head->val);
            head = head->rp;
        }
        printf("%d",head->val);
    }
}

void delete1(node * head,int y){
    if (head == NULL){
        printf("NO");
    }
    else {
        node * p = head ;
        while (p != NULL && p->val != y ){
            p = p->rp;
        }
        p->lp->rp = p->rp;
        p->rp->lp = p->lp;
    }
}
int main() {
   // initializing nodes :
   node * one ;
   node * two ;
   node * three ; 
   node * four ;
   
   // allocating memory :
   
   one = (node *)malloc(sizeof(node));
   two = (node *)malloc(sizeof(node));
   three = (node *)malloc(sizeof(node));
   four = (node *)malloc(sizeof(node));
   
   // data assign
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
   
   delete1(one,3);
   view(one);
   
   
   free(one);
   free(two);
   free(three);
   free(four);
   one , two , three , four = NULL , NULL , NULL , NULL;

    return 0;
}
