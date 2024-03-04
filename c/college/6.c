// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define cap 10

void bbsort(int arr[],int total){
    for (int i = 0 ; i<total ; i++){
        for (int j = 0 ; j<total ; j++){
            if (arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool binary_search(int arr[],int total , int search){
    int low = 1;
    int high = total;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Element %d found at index %d\n", search, mid);
            return true;
        } else if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("ELEMENT %d NOT FOUND IN THE ARRAY\n", search);
    return false;
}

bool binary_search_recursive(int arr[], int low, int high, int search) {
    if (low > high) {
        printf("ELEMENT %d NOT FOUND IN THE ARRAY\n", search);
        return false;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == search) {
        printf("ELEMENT %d FOUND AT INDEX %d\n", search, mid);
        return true;
    } else if (arr[mid] < search) {
        return binary_search_recursive(arr, mid + 1, high, search);
    } else {
        return binary_search_recursive(arr, low, mid - 1, search);
    }
}

int main() {
    int arr[cap] , total;
    clock_t start, end ,start1,end1;
    double cpu_time_used , cpu_time_used1;
    printf("ENTER TEST SET : ");
    scanf("%d",&total);
    
    for (int i = 0 ; i<total ; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    bbsort(arr,total);

    start = clock();
    binary_search(arr,total,6);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("TIME TAKEN W//O REC = %lf\n\n",cpu_time_used);
    
    start1 = clock();
    binary_search_recursive(arr,1,total,8);
    end1 = clock();
    cpu_time_used1 = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    printf("TIME TAKEN WITH REC = %lf",cpu_time_used1);
    
    

    return 0;
}
