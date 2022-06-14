// find the smallest positive missing number in the given array with 0;
//constraints:  0<n<1e6  &  -1e6<Ai<1e6
//acc to constraints we need to propose solution of strictly less than O(n^2)

#include<iostream>
#include<climits>
using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i=0; i<n ; i++){
//         cin>>arr[i];
//     }

//     const int N = 1e6+2;
//     bool check[N];
//     for (int i=0; i<N; i++){
//         check[i]=false;
//     }

//     for (int j=0 ; j<n; j++){
//         if (arr[j]<0){
//             continue;
//         }
//         else{
//             check[arr[j]]=true;
//         }
//     }

//     for (int k =0; k<N; k++){
//         if (check[k]==false){
//             cout<<k;
//             break;
//         }
//     }
    
//     return 0;
// }


//==========================


int main(){

    int n;
    cin>> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    const int N = 1e6;
    bool idx_arr[N];
    
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            idx_arr[arr[i]] = true;
        }
    }
    for(int j=1; j<N; j++){
        if(idx_arr[j] == false){
            cout<<j<<endl;
            return 0;
        }
    }
    return 0;
}