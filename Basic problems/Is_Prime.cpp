//check if given number is prime or not

#include<iostream>
using namespace std;

int main(){
    int num, flag=1;
    cout<<"Enter a number:";
    cin>>num;
    if(num==1){
        cout<<"1 is Nor prime Not composite";
    }
    else{
        for (int i=2; i<=num/2; i++){   // we can also use 'i<=sqrt(n)' in for loop as a condition 
            if(num%i==0){
                cout<<"The number is not prime.";
                flag = 0;
                break;
            }
        }
        if(flag==1){
            cout<<"The number is prime.";
        }
    }
    return 0;
}
// NOTE: we can also use 'i<=sqrt(n)' in for loop as a condition 
