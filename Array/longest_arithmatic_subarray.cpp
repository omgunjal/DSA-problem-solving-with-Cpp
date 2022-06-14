// This is a question from Google KickStart :
/*
    we have to find the longest arithmatic subarray of the given array

    arithmatic subarray means the difference between two consecutive array elements is equal
*/

#include<iostream>
#include<climits>
using namespace std;


//Optimal code:{from lecture}

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int current_arr_len = 2;
//     int longest_arr_len = 0;
//     int previous_diff = arr[1]-arr[0];
    
//     for (int j=2; j<n; j++){
//         int current_diff = arr[j]-arr[j-1];
//         if (current_diff == previous_diff ){
//             current_arr_len++;
//         }
//         else{
//             previous_diff = current_diff;
//             current_arr_len = 2;
//         }
//         if (longest_arr_len < current_arr_len){
//             longest_arr_len = current_arr_len;
//         }
//     }
//     cout<<"The longest subarray length is:"<<longest_arr_len;
    
//     return 0;
// }



/*
int main(){

    int n;
    cin>>n; 
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
   
    int maxlength = INT_MIN;

    for (int i=0; i<n; i++){
        int length = 2;
        int diff = arr[i+1] - arr[i];
        for( int j=i+1;j<n; j++ ){

            if( (arr[j+1]- arr[j] == diff) && j+1<=n){
                length++;
            }
            else{
                maxlength = max(length , maxlength);
                break;
            }

        }
    }
    cout<<"length of the largest arithmatic subarray is: "<<maxlength;
    return 0;
}
*/

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int prev_diff = arr[1]-arr[0];
    int curr_diff = 0;
    int curr_len = 2;
    int max_len = 2;

    for(int i=1;i<n-1; i++){
       curr_diff = arr[i+1]-arr[i];
        if(curr_diff == prev_diff){
            curr_len++;
            max_len = max(max_len,curr_len);
        }else{
            prev_diff = curr_diff;
            curr_len = 2;
        }
    }
    cout<<max_len<<endl;
}