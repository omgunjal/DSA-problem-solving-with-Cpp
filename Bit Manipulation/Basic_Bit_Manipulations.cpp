/*
    4 Basic Bit manipulation operations:
    1)
    2)
    3)
    4)
*/
#include<iostream>
using namespace std;

int get_bit(int num, int pos){
    return ((num & (1<<pos))!=0);
}

int set_bit(int num , int pos){
    return (num | (1<<pos));
}

int clear_bit(int num, int pos){
    int mask = ~(1<<pos);
    return (num & mask);
}

int update_bit(int num, int pos, int val){
    // step 1:clear the position
    int mask = ~(1<<pos);
    num = (num & mask);
    // set the value
    return (num | (val<<pos));
}

int main(){
    // get bit function
    cout<<get_bit(5, 1)<<endl;

    // set bit
    cout<<set_bit(10, 2)<<endl;

    // clear bit
    cout<<clear_bit(7, 1)<<endl;

    // update bit
    cout<<update_bit(5,1,1)<<endl;

    return 0;
}