// find the transpose of the given matrix

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>> n;
    // taking input
    int arr[n][n];
    cout<<"enter the values of array:";
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // printing origional array
    cout<<"The origional array is:"<<endl;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    // transposing the origional array 
  
    for(int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout<<endl;
    }
    cout<<"The transformed array is:"<<endl;
    // printing transformed array
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }



/*
                OR
    (Just printing the transpose but not changing the origional array)

    cout<<"The transformed array is:"<<endl;
    // printing transformed array
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[j][i]<<' ';
        }
        cout<<endl;
    }

*/
    return 0;
}