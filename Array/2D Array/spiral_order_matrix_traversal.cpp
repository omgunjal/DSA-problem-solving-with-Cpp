// traverse the matrix (2D array) in spiral order:
/* 
        * -> * -> * -> *
                       |
        * -> * -> *    *
        ^              |
        |              |
        * <- * <- * <- * 
*/  

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    // taking the inputs
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // traversing the in spiral order:
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start<=row_end || col_start <= col_end){

        // step 1:
        for (int col = col_start; col<=col_end; col++ ){
            cout<< arr[row_start][col]<<' ';
        }
        row_start++;
        // step 2:
        for (int row = row_start; row<=row_end; row++ ){
            cout<<arr[row][col_end]<<' ';
        }
        col_end--;
        // step 3:
        for (int col=col_end; col>=col_start; col--){
            cout<<arr[row_end][col]<<' ';
        }
        row_end--;
        // step 4:
        for (int row=row_end; row>=row_start; row--){
            cout<<arr[row][col_start]<<' ';
        }
        col_start++;
    }

    return 0;
}