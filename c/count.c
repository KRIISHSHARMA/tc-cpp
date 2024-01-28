#include <stdio.h>

int main() {
    int n;
    printf("Enter length of bits: ");
    scanf("%d", &n);
    int bit[n];

    for (int i = 0; i < n; i++) {
        printf("Enter value for bit %d: ", i);
        scanf("%d", &bit[i]);
    }

    printf("Entered bits: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", bit[i]);
    }
    int c = 0;
    int c1 = 0 ;
    for (int i = 0 ; i <n ; i++){
       if (bit[i] == 0) {
          c++;
       }
       else {
         c1++;
    }
    }
     
     printf("\nnumer of 0's in array : %d " , c);
     printf("\nnumber of 1's in array : %d " , c1);
    return 0;
}

