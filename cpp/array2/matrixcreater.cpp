#include <iostream>
using namespace std;

int main(){
  int i ;
  int j ; 
  cout<<"ENTER DIMENSION : ";
  cin>>i>>j;
  int arr[i][j] ;
  int len = sizeof(arr[0])/sizeof(arr[0][0]);
  for (int i=0 ; i<len ; i++){
    cout<<"[";
    for (int j =0 ; j<len ; j++){
      int c ;
      cout<<"ENTER ELEMENT NUMBER  "<<i<<","<<j<<" :  ";
      cin>>c;
      arr[i][j] = c;
    }
    cout<<"]"<<endl;
  }
  for (int i=0 ; i<len ; i++){
    cout<<"[";
    for (int j =0 ; j<len ; j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<"]"<<endl;
  }

}
