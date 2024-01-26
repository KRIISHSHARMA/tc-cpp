#include<vector>
#include<iostream>
using namespace std;
void d(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i , int j , vector<int>& v){
     while(i<=j){
        //swap v[i] and v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
void reverse(vector<int>& v1 ){
    int i = 0 ;
    int j = v1.size()-1;
    while(i<=j){
        //swap v[i] and v[j]
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }
}
int main()
{   vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3); 
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    d(v1);
    //reverse
    // int i = 0 ;
    // int j = v1.size()-1;
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }
   // reversepart(0,4,v1);
    reverse(v1);
    d(v1);
    return 0;
}