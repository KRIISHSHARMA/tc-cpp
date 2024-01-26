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
    v.push_back(2);
    v.push_back(82);
    v.push_back(55);
    v.push_back(7);
    v.push_back(2);
    v.push_back(82);
    v.push_back(55);
    v.push_back(7);
    int x = 55;
    int idx = -1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx = i;
    // }
    // cout<<idx;   // forward search
    // cout<<endl;
    for (int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    return 0;
}