// find the maximum sum of subarray amongst all the subarrays

#include<iostream>
#include<climits>
using namespace std;

void kadane_method(int arr[], int n);
void brut_force_method(int arr[], int n);

int main(){

    
    int n;
    cin>>n;

    int arr[n];
    for(int a = 0; a<n; a++){
        cin>>arr[a];
    }

    //kadane_method(arr, n);
     //   OR
    brut_force_method(arr, n);
    
    return 0;
    
}

void brut_force_method(int arr[], int n){
    
    int max_sum = INT_MIN;
    
    for (int i=0; i<n; i++){
        int sum =0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            max_sum = max(max_sum , sum);
        }
    }

    cout<<"the maximum sum of subarray is:"<<max_sum<<endl;
    return;
}

/* Here , the time complexity is O(n^2)
 but we can do this better :i.e. in just time complexity of O(n)!!
 For that We will use:  "Kadane's Algorithm"
                        ====================

    array       =>    -1  4 -6  7  -4
                       ^  ^  ^  ^   ^
    current sum =>    -1  4 -2  7   3
    replace -ve =>     0     0          // we replace -ve with 0 bcz, -ve numbers loweres the sum 

    NOW, the maximum number in the current sum array = 7 is the maximum sum of subarray;
*/

void kadane_method(int arr[], int n){

    int current_sum =0;
    int max_sum =INT_MIN;
    
    for (int i =0; i<n ; i++){
        current_sum += arr[i];
        if(current_sum<0){
            current_sum=0;
        } 
        max_sum = max(max_sum ,current_sum);
    }

    cout<<"The maximum sum is:"<<max_sum<<endl;
    return;
}




