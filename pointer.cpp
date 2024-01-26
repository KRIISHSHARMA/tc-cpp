#include<iostream>
using namespace std;
int main()
{
    int v = 5;
    // cout<<&v;
    int* p  = &v;
    cout<<&v<<endl<<p<<endl<<*p;

    return 0;
}