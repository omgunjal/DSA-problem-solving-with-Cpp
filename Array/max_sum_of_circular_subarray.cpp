// find the maximum sum of circular subarray
/*
    @ Aproach:
    here ,if all the contributing elements to max_sum are non wrapping: 
    1.we will 1st find the max_sum_of_subarray by using kadane's algo.
    &
    if the contributing elements to max_sum are wrapping:
    1. we will first reverse the sign of all the elements in the given array
    2. then, calculate the max_sum by kadane's algorithm
    3. then, calculate  actual max_sum :
        actual_max_sum = Total sum of the origional array - the max_sum we calculated here
    i.e. max_subarray_sum = total_sum - sum of non contributing elements 
    then, we will take the maximum of both the max_sums as a answer!!!
*/

#include<iostream>
#include<climits>
using namespace std;

int kadane_maxsum(int arr[], int n)
{
    int max_sum =INT_MIN;
    int current_sum = 0;
    for (int i=0; i<n; i++){
        current_sum += arr[i];
        if(current_sum < 0){
            current_sum = 0;
        }
        max_sum = max(current_sum , max_sum);
    }
    return max_sum;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int a =0; a<n; a++){
        cin>>arr[a];
    }

    int total_sum =0;
    // finding the total sum of the array
    for(int i=0; i<n; i++){
        total_sum += arr[i]; 
    }

    // calculate max_sum_1 : for non wrapping contributing elements
    int max_sum_1 = kadane_maxsum(arr,n);

    // calculate max_sum_2 : for wrapping contributing elements;
    // reverse the sign of all the elements
    for (int k = 1; k<n; k++){
        arr[k] = -arr[k];
    }
    
    // calculate the max_sum_2 using formula explained in description of approach 
    // here we have added -ve sign bcz we need to rechange the sign since,we rechanged sign of array elements b4 calculating the  

    int max_sum_2 = total_sum - (-kadane_maxsum(arr, n) );

    // take the max_sum as maximum of the max_Sum_1 & max_sum_2
    cout<<"The maximum sum of the subarray is:"<<max(max_sum_1, max_sum_2)<<endl;

    return 0;
}