// WE have to find the record breaking day if:
// condition 1: last day is compulsory counted as record breaking day
// condition 2: record breaking day is a day havng more value than prevous day.

#include<iostream>
#include<climits>
using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for (int a = 0; a<n; a++){
//         cin>>arr[a];
//     }

//     int n_record_breaking_days=0;
//     int maximum = INT_MIN;
//     for (int i=0; i<n; i++){
//         if (arr[i]>maximum){
//             maximum = arr[i];

//             if (i==n || arr[i]>arr[i+1]){
//                 n_record_breaking_days++;
//                 cout<<arr[i]<<endl;
//             }
//         }
//     }

//     cout<<"The number of record breaking days:"<<n_record_breaking_days<<endl;

//     return 0;
// }

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }

    int crt_day = 1;
    int rb_days =0; // 1st and last
    int max_till_now = INT_MIN;
    while(crt_day<n){
        //condition1:
        if(arr[crt_day]>max_till_now){
            max_till_now = arr[crt_day];
            //condition 2:
            if(crt_day == n || arr[crt_day]> arr[crt_day+1]){
            rb_days++;
            cout<<arr[crt_day]<<" ";
            } 
        }
        crt_day++;
    }
    cout<<rb_days;
    return 0;
}