/*
    write a program to check whether a number is power of 2 or not using bit manipulation

    # any power of 2 has only one 1 and others are 0. e.g. 16 = 1000
    # We know that, n = 6 => 0110 and
                               ^
                            rightmost one. 
                  n-1 = 5 => 0101.
        i.e. from the rightmost 1 every bit reverses.

    # Hence, if we apply following operation on numbers with power of 2,it gives all 0.
     n & n-1 => 16 & 15 => 1000 & 0111 => 0000.

    using this logic we are going to solve this problem
*/

#include<iostream>
using namespace std;

int isPowerof2(int num){
    return (num && !(num & num-1));     // here num && => signifies the corner case: i.e. num =0 , hence, we can't calculate n-1
    //          ^        ^ 
    //          |        |
    //  [logical and]   [bitwise and]       

}
// OR
int ispower2(int n){
    return (n & (n-1))== 0;
}

int main(){

    cout<<ispower2(64)<<endl;
    return 0;
}

