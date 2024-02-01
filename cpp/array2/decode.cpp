#include <iostream>
using namespace std ;

char intToASCII(int alpha){
    return char(alpha);
    
}
int main(){
    int x;
    cout << "HOW MANY NUMBERS ? : ";
    cin >> x ;
    int arr[x] ;
    for (int i ; i < x ; i++){
        cout<<"ENTER ELEMENT 1 "<<i<<": ";
        cin>>arr[i] ;
        }
    for (int i ; i < x ; i++){
        cout<<"GIVEN FOR DECODING "<<arr[i]; 
        }
    cout<<"DECODED MESSAGE =  ";
    for (int i ; i < x ; i++){
        cout<<intToASCII(arr[i]);
        }
    // cout<<intToASCII('a');
 }
