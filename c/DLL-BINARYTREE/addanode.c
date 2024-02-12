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

void add(node * head , int y , int z){
    node * r = (node *)malloc(sizeof(node));
    r->val=z;
    r->rp=NULL;
    r->lp=NULL;
    
    if (head == NULL){
        printf("EMPTY");
    }
    else {
        node * p = head ;
        while (p != NULL && p->val != y ){
            p = p->rp;
        }
        if (p->rp != NULL){
        r->rp = p->rp;
        r->lp = p->lp->rp;
        p->rp = r;
        r->rp->lp=r;
        }
        else{
            r->lp = p;
            p->rp = r;
        }
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
   
   add(one,3,5);
   view(one);
   
   
   free(one);
   free(two);
   free(three);
   free(four);
   one , two , three , four = NULL , NULL , NULL , NULL;

    return 0;
}
