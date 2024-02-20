#include <stdio.h>


int mul(int x, int y){
    return (x * y) ;
}
int sub(int x , int y){
    return (x - y) ;
}
int main() {
    
    int (*functionpointer[]) (int,int) = {mul,sub};
    int a =5;
    int b = 4 ;
    int result = functionpointer[1](a,b);
    printf("%d",result);

    return 0;
}
