// find the sum of first 'n' natural numbers
/*
    method 1: using for loop

    method 2:using formula: sum = n(n+1)/2

*/

#include<iostream>
using namespace std;

int sum(int n){
    return (n*(n+1))/2;
}

int main(){
    int n;
    cout<<"Enter  n:"<<endl;
    cin>>n;
    cout<<sum(n);
    return 0;
}