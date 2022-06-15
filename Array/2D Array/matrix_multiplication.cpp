// find the matrix multiplication 

#include<iostream>
using namespace std;

int main(){
    int n1, m1;
    int n2, m2;

    cin>>n1>>m1>>n2>>m2;

    if(m1 != n2){
        cout<<"these matrices can't be multiplied";
        return 0;
    }
    else{

        // input array 1
        int arr1[n1][m1];
        for (int i=0; i<n1; i++){
            for (int j=0; j<m1; j++){
            cin>>arr1[i][j];
            }
        }
        // input array 2
        int arr2[n2][m2];
        for (int i=0; i<n2; i++){
            for (int j=0; j<m2; j++){
            cin>>arr2[i][j];
            }
        }
        // declare ans array and initializing it to 0
        int ans[n1][m2] ;
        for (int i=0; i<n1; i++){
            for (int j=0; j<m2; j++){
                ans[i][j] = 0;
                }
        }   
        //calculate the matrix multiplication
        
        for (int i=0; i<n1; i++){
            for (int j=0; j<m2; j++){
                for (int k =0; k<n2; k++){
                    ans[i][j] += arr1[i][k] * arr2[k][j];
                }    
            }
        }

        // print the results:
        
        for (int i=0; i<n1; i++){
            for (int j=0; j<m1; j++){
            cout<<arr1[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<"*"<<endl;;
        
        for (int i=0; i<n2; i++){
            for (int j=0; j<m2; j++){
            cout<<arr2[i][j]<<' ';
            }
            cout<<endl;
        }
        cout<<"_____________"<<endl;;
        
        for (int i=0; i<n1; i++){
            for (int j=0; j<m2; j++){
            cout<<ans[i][j]<<' ';
            }
            cout<<endl;
        }
    return 0;
    } 
}