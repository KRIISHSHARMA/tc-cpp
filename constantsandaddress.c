#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main()
{
    const int z =10; // z = x will show error as z is constant now
    int x = 10;
    double y = 0.0;
    y = pi;
    printf("x=%d\n",x);
    printf("y=%1f\n",y);

    //address 
    printf("%d",&y);
    return 0;
}