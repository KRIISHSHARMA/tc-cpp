#include<stdio.h>
#include<stdbool.h>
int main(){
  int n ; 
  printf("MAX NUMBER : ");
  scanf("%d",&n);
  
  bool prime[n+1];
  for (int i = 0 ; i < n ; i++){
      prime[i] = true;
  }
 
 // Sieve of Eratosthenes to find prime numbers
  for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false; // Mark multiples as non-prime
            }
        }
    }
    
   printf("Prime numbers till %d are :",n);    
   for (int i = 1 ; i < n ; i++){
       if (prime[i]){
           printf("%d ",i);
       }
   }
}

  
