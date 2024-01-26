#include<iostream>
using namespace std;
int main()
{ 
    int x= 10;
    int* p = &x;
    cout<<p<<endl; //0x7ffcab483cac
    p++; 
    cout<<p; // 0x7ffcab483cb0 4 bytes ahead cause int
    return 0;
}