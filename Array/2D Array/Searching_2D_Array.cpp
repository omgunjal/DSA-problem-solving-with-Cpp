// Searching a 2D array

# include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    // Declaring the 2D array
    int arr[n][m];
    cout<<"enter the array elements:";
    // Taking array as input
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    } 

    int key;
    cout<<"Enter a search key:";
    cin>>key;

    bool flag = false;
    // searching for a key
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(arr[i][j]==key){
                // here our indexes start from 0; if we want matrix indexes starting from 1 cout i+1 and j+1 in next code line.
                cout<<"Key is Found at index: ("<<i<<','<<j<<")\n";
                flag = true;
                break;
            }
        }
    }
    
    if (flag == false){
        cout<<"Oops!! key not found in the array.";
    }

    return 0;

}