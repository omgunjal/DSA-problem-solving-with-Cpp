// calculate nCr
// nCr is also known as ""Binary Coefficient""
/*
    nCr =      n!
          ___________
          (n-r)! * r!
*/

#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i=1;i<=num; i++ ){
        fact *= i; 
    }
    return fact;
}

int calculate_ncr(int n, int r){
    int ncr = fact(n)/(fact(n-r) * fact(r));
    return ncr;

}

int main(){
    int n,r;
    cin>>n>>r;
    int ncr = calculate_ncr(n,r);
    cout<<" nCr = "<<ncr;
    return 0;
}