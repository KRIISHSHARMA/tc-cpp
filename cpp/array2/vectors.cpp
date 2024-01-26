#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //array replacement cause array fixed size(immutable)
    //vectors are dynamic array ( mutable )
    //doubles size to make space
    vector<int> v; //dont need to mention size
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.size()<<endl;
    // cout<<v[3]<<" ";



    return 0;
}