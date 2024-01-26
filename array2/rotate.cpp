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
    int n = v1.size();
    int k ;
    cout<<"enter how many times do you want to rotate ? : ";
    cin>>k;
    //rotate
    if(k>n) k%=n;  //for greater values
    reversepart(0,n-k-1,v1);
    reversepart(n-k,n-1,v1);
    reversepart(0,n-1,v1) ;  //reverse(v1);
    d(v1);
    return 0;
}