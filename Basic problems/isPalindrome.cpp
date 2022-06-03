// check whether the given no. is palindrome or not?

#include<iostream>
using namespace std;
/*
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int rev=0, rem=0, orig =n;
    while(n>0){
        rem = n%10;
        n = n/10;
        rev = (rev*10) + rem;
    }
    if (rev==orig){
        cout<<"The number is palindrome"<<endl;
    }else{
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
}
*/

int main(){
    int n;
    cout<<"enter a number";
    cin>> n;

    int rev=0, orig = n, dig = 0;
    while(n>0){
        dig = n%10;
        rev = (rev*10) +dig ;
        n = n/10; 
    }
    rev==orig?cout<<"palindrome":cout<<"not palindrome";
    return 0;
}