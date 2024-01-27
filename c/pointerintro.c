#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    printf("addof a : %p\n" , &a);
    printf("add of p : %p\n" , p);
    printf("size of a : %ld bytes \n" , sizeof(a));
    printf("size of p : %ld bytes \n" , sizeof(p));
    printf("value of a : %d\n" , a);
    printf("value of p : %d\n" , *p);
}


