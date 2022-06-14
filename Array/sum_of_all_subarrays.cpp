// find the sum of all the subarrays:
/*
    if    array  = [1 2 2]
       subarrays = [1] [1 2] [1 2 2] [2] [2 2] [2]
sum of subarrays =  1    3      5     2    4    2
*/


#include<iostream>
using namespace std;

void calculateSumOfSubarray(int arr[], int n){

    for (int i=0; i<n; i++){
        int addition=0;
        for( int j=i; j<n; j++){
            addition += arr[j];
            cout<<addition<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    //function call:
    calculateSumOfSubarray(arr,n);

    return 0;
}
//////////////////////////////////////////
