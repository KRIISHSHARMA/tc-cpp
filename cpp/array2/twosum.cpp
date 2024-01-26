#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x ;
    cout<<"enter the sum : ";
    cin>>x;
    vector<int> v ;
    int n;
    cout<<"enter array size : ";
    cin>>n;
    
    cout<<"enter elements :";
    for(int i = 0;i<n;i++){
        int r ;
        cin>>r;
        v.push_back(r);
    }
    
    
    for(int i =0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
            }
        }

    }



    return 0;
}