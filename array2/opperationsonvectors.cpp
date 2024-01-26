#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(8);
    v.push_back(2);
    v.push_back(82);
    v.push_back(55);
    v.push_back(7);
    v.push_back(6);
    v.push_back(22);
    v.push_back(2);
    v.push_back(11);
    v.push_back(61);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}