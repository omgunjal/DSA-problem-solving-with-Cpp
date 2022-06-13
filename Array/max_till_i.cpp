// find the maximum element in array till i^th index 
/*
    i   => 1  2 3 4 5 6
    arr => 5 -9 3 8 1 9 
    max => 5  5 5 8 8 9  
*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for (int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        cout<<max<<' ';
    }

    return 0;
}