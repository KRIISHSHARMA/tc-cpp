#include<iostream>
using namespace std;
void d(int arr[]){
    for(int i=0; i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int a[]){
    a[0]=0;
}
int main(){
    int arr[] = {1,2,3,5,8,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    d(arr);
    change(arr);
    d(arr);
    cout<<endl;
    cout<<size;
    
}