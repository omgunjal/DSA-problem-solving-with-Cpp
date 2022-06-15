//  Search an element in a sorted 2D matrix

#include<iostream>
using namespace std;

// method 1: starting from right upper corner of the matrix.
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    // taking input
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"enter the target element to search:";
    cin>>target;
    // searching the element
    int row =0, col = m-1;  // starting searching from the top right corner of the matrix
    bool flag = false;
    while(row<= n || col>= 0){
        if (arr[row][col]==target){
            cout<<"element is found at:"<<'('<<row<<','<<col<<")"<<endl;
            // we can use row+1 and col+1 if we want matrix indexes to start from 1
            flag = true;
            break;
        }
        else if(arr[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }
    if (flag == false){
        cout<<"the target element is not present in the matrix";
    }

    return 0;
}

/*
    at line no.22: If we can also start with bottom left corner of the matrix:
                    In that case, we need to change: r++ to col++
                    and col-- to row--; 
                    and change while condition to col<=m || row>=0
*/

// OR   2.{starting from left bottom of matrix}

int main(){
    int n, m;
    cin>> n>> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"enter the element to search:";
    cin>>target;

    int row =n-1,col = 0;
    bool flag = false;
    while (row>=0 || col<=m-1){
        if(arr[row][col]==target){
            cout<<"element found;";
            flag == true;
            break;
        }
        else if(arr[row][col]<target){
            row--;
        }
        else{
            col++;
        }
    } 
    if(!flag){
        cout<<"the element is not found";
    }
}