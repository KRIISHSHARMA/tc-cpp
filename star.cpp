#include<iostream>
using namespace std;
void st(int a){
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
            cout<<"&";
            }
            cout<<endl;
        }
    
}
int main()
{
    int b ;
    cout<<"enter number :  "<<endl;
    cin>>b ;
    st(b);
    return 0;
}
