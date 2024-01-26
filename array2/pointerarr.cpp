#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,31,4,13,24,52,452,45};
    int* ptr = arr ;// correct for arrays wrong for single values for that we use &
    //int* ptr1 = &arr[0];
    // cout<<ptr<<endl<<ptr1;
    for(int i=0;i<=7;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    ptr[0]=8; // dont need dereference opp (*) to change value
    // can also write *ptr = 8 
    for(int i=0;i<=7;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //for(int i=0;i<=7;i++){
   //     cout<<*ptr<<" ";
    //    ptr++;
   // }
    cout<<endl;
    ptr = arr ; //ptr pointing to first ele
    ptr++; // ptr pointing to 2nd ele
    *ptr = 9 ;
    ptr--;//ptr pointing to 1st ele
    for(int i=0;i<=7;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    return 0;
}