#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[] = "HELLO SUCKERS I AM BURI BURI ZAIMON";
    int len = strlen(str);
    int count = 0;
    for (int i = 0 ; i<len ; i++){
        if (str[i] == ' ' ){
            count++;
        }
    }
    cout<<count;
    return 0;
}
