#include <stdio.h>

int main() {
    int arr3[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 0 ; i < 2 ; i++){
        printf("\n");
        printf("----------------------------");
        for (int j = 0 ; j < 3 ; j++){
           printf("\n");
            for (int k = 0 ; k < 2 ; k++){
                printf("| %d | ",arr3[i][j][k]);
            }
        }
    }

    return 0;
}
