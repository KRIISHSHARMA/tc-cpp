#include<iostream>
using namespace std;
void find(int n , int* p , int* pp){
    *pp = n%10; // last digit
    while(n>9){
        n/=10;
    } 
    *p = n ;
    return;
}
int main()
{
    int n;
    cin>>n;
    int fd , ld;
    int* p = &fd;
    int* pp = &ld;
    find(n,p,pp);
    cout<<fd<<endl<<ld;
    return 0;
}