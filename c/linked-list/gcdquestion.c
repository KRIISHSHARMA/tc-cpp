#include <math.h> 
#include <stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void view(struct node *head) {
    while (head!= NULL) {
        printf("%d ", head->data);
        head= head->next; // Move to the next node
    }
}

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Find Minimum of a and b 
	int result = ((a < b) ? a : b); 
	while (result > 0) { 
		// Check if both a and b are divisible by result 
		if (a % result == 0 && b % result == 0) { 
			break; 
		} 
		result--; 
	} 
	// return gcd of a nd b 
	return result; 
} 

struct node * gcdcreate(struct node * head){
    if (head == NULL) return;
    struct node * prev = head;
    struct node * curr = head->next;
    while (curr!= NULL) {
      struct node * gcd1 = (struct node*) malloc(sizeof(struct node));
      gcd1->data = gcd(prev->data,curr->data);
      gcd1->next = curr;
      prev->next = gcd1;
      prev = curr;
      curr = curr->next;
    }
    return head;
}




// Driver program to test above function 
int main() 
{ 
 // initializing nodes :
    struct node *first;
    struct node *second;
    struct node *third;

    // allocating memory :
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // data assign 

    first->data = 2; // x->y = (*x).y
    first->next = second; 

    second->data = 12;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    view(gcdcreate(first));
    
    // Free allocated memory
    free(first);
    free(second);
    free(third);
    
    // Avoiding dangling pointers
    first = NULL;
    second = NULL;
    third = NULL;
    return 0;
} 
