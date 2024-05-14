#include <iostream>
#include <string>
using namespace std;

int main (){
    string str = "YOYOY honey singhhhhhhhhhhh";
  //  cout << "Enter a string: ";
  //  getline(cin , str)

    int hset[256] = {0};
    for (int i = 0 ; i < str.size() ; i++){
        hset[str[i]]++;
    }

    for (int i = 0 ; i < 256 ; i++){
        if (hset[i] != 0){
            //cout << i << " : " << hset[i] << endl;
            printf("%c : %d\n",i , hset[i] );
    }
}
}
