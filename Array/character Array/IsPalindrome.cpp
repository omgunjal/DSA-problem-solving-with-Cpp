// check whether the given world is palindrome or not using character array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // taking the input
    char arr[n];
    cin>>arr;

    bool flag = false;
    /*
    for (int i=0; i<n; i++){
        if (arr[i]!=arr[n-1-i]){
            flag = false;
            break;
        }
        else{
            flag=true;
        }
    }
    
    if (flag){
        cout<<"The word is palindrome";
    }else{
        cout<<"The word is not palindrome";
    }
    */
    
           //   OR
    
    for(int i=0; i<n; i++){
        arr[i]!=arr[n-1-i]?flag = false:flag= true;
    }
    flag==true?cout<<"The number is palindrome":cout<<"The number is not palindrome";
    
    return 0;
}