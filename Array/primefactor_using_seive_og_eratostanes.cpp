/*
    Find the prime factors using seive of eratosthanes.

    How to find prime factors?:
    1.we will find the smallest prime factor(SPF) of n,
    2. divide n by SPF,
    3. until number brcomes 1.

    if number is : n=20, then: 20 -----> 10 ------>5 ----->1;
    Spf[n]:                         2          2        5
    Hence, prime factors are : 2*2*5
*/

#include<iostream>
using namespace std;


void primeFactor(int n){

    int spf[n]={0}; // this array will fold the smallest prime factor for each word

    // initialize the array to the no. itself ==> since smallest prime no. of prime number is that no. itself
    for (int i=2; i<=n; i++){
        spf[i] = i;
    }

    for (int i=2; i<=n; i++){
        if(spf[i] == i){        // checking  if its unmarked ==> here marked number will have value other than that numbr itself 

            for (int j=i*i; j<=n; j+=i){
                if(spf[j] == j){        // if those indexes aren't marked yet:
                     spf[j]= i;         // then mark them with their SPF i.e. 'i' will be there spf.
                }
            }
        }
    }

    // now ,the technique to get prime factor:
    // How to find prime factors?:
    // 1.we will find the smallest prime factor(SPF) of n,
    // 2. divide n by SPF, until number brcomes 1.

    // if number is : n=20, then: 20 -----> 10 ------>5 ----->1;
    // Spf[n]:                         2          2        5
    // Hence, prime factors are : 2*2*5
    
    while(n!=1){
    cout<<spf[n]<<" ";  //step 1
    n = n/spf[n];   //step 2
    }
}

int main(){

    int n;
    cin>>n;

    primeFactor(n);
    return 0;
}
   

