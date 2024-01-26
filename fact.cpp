#include<iostream>
using namespace std;
int fact(int x ){
    int f = 1;
    for(int i=2;i<=x;i++){
        f*= i ;
    }
    return f;
}
int main(){
    int nf=fact(10);
    int rf=fact(2);
    int nrf=fact(8);
    int ncr = nf/(rf*nrf);
    cout<<ncr;
}