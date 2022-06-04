// reverse the given number

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int rev=0,rem;
    while(num>0){
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    cout<<"the reversed number is:"<<rev;
    return 0;
}

