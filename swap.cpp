#include<iostream>
using namespace std;
void swap(int* x, int* y ){
    int temp = *x;
    *x = *y ;
    *y = temp ;
    return;
}
int main()
{
    int a = 8,b = 9;
    //cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}