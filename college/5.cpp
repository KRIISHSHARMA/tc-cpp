#include <iostream>
using namespace std;


void merging(int arr1[] , int arr2[] , int total , int merged[]){
	for (int i = 0 ; i < total ; i++){
		merged[i] = arr1[i];
	}

	for (int i = 0 ; i < total ; i++){
		merged[total+i] = arr2[i];
	}
}


int main(){
	int total;
	cout<<"Enter Number of Elements for arr : ";
	cin>>total;
	cout<<endl;

	int arr1[total];
	int arr2[total];
	
	cout<<"Enter Elements for arr1\n";
	for (int i = 0 ; i < total ; i++){
	       cout<<"arr["<<i<<"] =";
           cin>>arr1[i];
           cout<<endl;
        }
	cout<<endl;
	cout<<"Enter Elements for arr2\n";
	for (int i = 0 ; i < total ; i++){
	       cout<<"arr["<<i<<"] =";
           cin>>arr2[i];
           cout<<endl;
        }
        
    int merged[total*2];
    merging(arr1,arr2,total,merged);
    cout<<"AFTER MERGING : "<<endl;
    for (int i = 0 ; i < (total*2) ; i++){
	    cout<<merged[i]<<endl; 
    }


	return 0;
}

// another method
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr1[] = {1, 4, 6, 3, 2};
//     int arr2[] = {6, 2, 5, 7, 1};
//     int merged[10]; // Assuming a large enough size for the merged array

//     int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//     int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

//    sort(arr1 , arr1 + arr1Size);
//    sort(arr2 , arr2 + arr2Size);
   
//    merge(arr1 , arr1 + arr1Size , arr2 , arr2 + arr2Size , merged);
//    for(int i = 0 ; i < 10 ; i++){
//        cout<<merged[i]<<endl;
//    }

//     return 0;
// }
