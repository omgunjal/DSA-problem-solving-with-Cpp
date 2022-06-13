// write a program to find minimum and maximum value of an array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];     //declaration of array
    // taking array values as input
    for(int i=0; i<n; i++){         
        cin>>arr[i];
    } 

    // finding the minimum and maximum
    int min_n = INT_MAX;       // Important tech to initialize min_no. as the maximum intger value
    int max_n = INT_MIN;       // initialize to min integer integer value.
    for (int i=0; i<n; i++){
        min_n = min(min_n, arr[i]);     // or we can use if condition 
        max_n = max(max_n, arr[i]);     
    }

    // printing the output:
    cout<<"min:"<<min_n<<"\tmax:"<<max_n<<endl;
    return 0;
}
