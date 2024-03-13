// Online C compiler to run C program online
#include <stdio.h>
#define capacity 10

void remover(int arr[], int index, int *total) {
    // Shift elements to fill the gap created by removing the element at index
    for (int i = index; i < (*total) - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*total)--;
}

void scanner(int arr[] , int *total){
    int hashSet[10] = {0};
    int i = 0;

    while (i < *total) {
        if (hashSet[arr[i]] == 1) {
            // If the element is a duplicate, remove it
            remover(arr, i, total);
        } else {
            // Mark the element as seen
            hashSet[arr[i]] = 1;
            i++;
        }
    }
}


int main() {
    // Declare the arr with the length set to capacity
  int arr[capacity];

  // total will store the total amount of values actually stored in the arr
  int total = 0;

  // stores the index of the value to delete from the arr
  int d_index = 0;
  
  // Prompt the user to enter the total amount of values to store, and store 
  // what the user enters into total
  printf("Enter Total Number Of Values To Store: ");
  scanf("%d", &total);
  
  // Prompt the user to enter total amount of value, storing each value entered
  // into the arr in the order they were entered starting at the first inde
  for (int i = 0; i < total; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  printf("\n");
  
  
  scanner(arr,&total);
  
  printf("AFTER REMOVING DUPLICATES\n");
  
   for (int i = 0; i < total; i++)
  {
    printf("arr[%d] = %d\n",i,arr[i]);
  }

  

    return 0;
}
