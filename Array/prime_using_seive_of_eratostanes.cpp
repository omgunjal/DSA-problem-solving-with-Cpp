/*
    find the prime numbrs upto n using seive of eratosthenes:

    Approach:
    step 1: Create a array of size n;
    step 2: loop i from 2(smallest prime number) to n:
                and mark the multiples of i (set them 1) if they aren't already 1.
                starting from i^2 upto n.
    step 3: check which fields are remained unchanged i.e. still 0,
            those will be our prime numbers. 
*/

#include<iostream>
using namespace std;

void prime(int n){
    //step 1: Create a array of size n
    int arr[n] = {0};

    //step 2:
    for (int i =2; i<=n; i++){
        if(arr[i]==0){
            for(int j =i*i; j<=n; j+=i){
                arr[j]=1;
            }
        }
    }

    // step 3:
    for (int i =2; i<=n; i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }

}

int main(){

    int n;
    cin>>n;
    
    prime(n);
    return 0;
}