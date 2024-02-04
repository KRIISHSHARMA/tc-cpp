#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() {
    unsigned int a = -1;
    int b = -1 ;
    unsigned int c = 1;
    cout<<"unsigned -ve : "<<a<<endl<<"unsigned in bits which is negative : "<<bitset<8>(a).to_string()<<endl<<"signed  : "<<b<<endl<<"Signed -ve : "<<bitset<8>(b).to_string()<<endl;
    cout<<"unsigned +ve : "<<c<<endl<<"unsigned positive : "<<bitset<8>(c).to_string();
    return 0;
}
