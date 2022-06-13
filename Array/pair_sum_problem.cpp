// find the pair of elements which sums to given value of the sum (seq)

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

bool pairsum1(int arr[], int n, int sum){      // time complexity: O(n^2)

    for (int i=0; i<n; i++){
        for (int j=0; j<n ; j++){
            if(arr[i]+arr[j]==sum){
                cout<<i<<' '<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

bool pairsum2(int arr[], int n, int k){
    // for sorted array

    int low=0, high=n-1;    // lowest and highest indexes of array
    while(low<high){
        if (arr[low]+arr[high]==k){
            cout<<low<<' '<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

bool pair_sum_solution(int arr[],int n,int k){
    // for unsorted: we will sort it
    sort(arr, arr+n);   // using sort() function from 'algorithms' header file.

    int high = n-1;
    int low = 0;

    while(low<high){
        if(arr[low] + arr[high] == k){
            cout<<arr[low] <<"   "<<arr[high]<<endl;
            return true;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}


int main(){
    int n, target_sum;
    cin>>n>>target_sum;

    int arr[n];
    for (int a = 0; a<n; a++){
        cin>>arr[a];
    }

    //cout<<pairsum1(arr, n, target_sum)<<endl;
    //      OR
    cout<<pair_sum_solution(arr, n, target_sum)<<endl;

    return 0;
}

