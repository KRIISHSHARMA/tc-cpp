#include <iostream>
#include<math.h> 

double equation(int n){
    
    if(n == 1 ){
        return 1;
    }
    else{
        return pow(-1,n-1)/(pow(n,n)) + equation(n-1);
    }
}

int main(){

    int num;
    std::cout<<"enter an integer: ";
    std::cin >> num;
    std::cout<<std::endl;
    double sum = equation(num);
    std::cout<<"sum : "<<sum<<std::endl;

    return 0;
}
