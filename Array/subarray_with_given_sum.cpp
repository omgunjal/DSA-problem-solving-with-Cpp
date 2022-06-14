// find the subarray with given sum in an given array
#include<iostream>
using namespace std;

// one of the best logic is implemnted here, 
// 1.first keep incrising sum till (sum < given sum i.e. s) usin g while
// 2.if (s == sum) ==> cout<<i and j-1
// 3.then , again in diff while, if (sum > s) ==> increment i and subtract arr[i] from sum to decrease ot to actual price. ;
// int main(){

//     int n, s;
//     cin>>n>>s;

//     int arr[n];
//     for (int a=0; a<n; a++){
//         cin>>arr[a];
//     }

//     int i=0, j=0, st =-1, end =-1, sum =0;

//     while(j<n && sum+arr[j]<=s){
//         sum += arr[j];
//         j++; 
//     }

//     if(sum==s){
//         cout<<i<<" "<<j-1<<endl;
//     }
    
//     while(j<n){
//         sum += arr[j];
//         while(sum>s){
//             sum -=arr[i];
//             i++;
//         }
//         if (sum == s){
//             st = i+1;
//             end = j+1;
//             break;
//         }
//         j++;
//     }

//     cout<<st<<" "<<end<<endl;

//     return 0;
// }

//--------------------------

// my own logic: O(n^2)
// but the uppper one logic is better O(N)
int main(){
    int n;
    cin>>n; 

    int s;
    cin>>s;

    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }

    int st =0;
    while(st<n){
        int end = st, crtsum =0;
        while(end<n && crtsum <= s){
            crtsum += arr[end];
            if(s== crtsum){
                cout<<st<<" "<<end<<endl;
                return 0;
            }
            end++;
        }
        st++;
    }
    cout<<-1<<endl;
    return 0;
}

