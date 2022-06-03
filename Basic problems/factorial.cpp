// find the factorial of the given number

#include<iostream>
using namespace std;

int main(){
    int n, fact=1;
    cout<<"enter a number:";
    cin>> n;

    for (int i=n;i>=1;i--){
        fact *= i;
    }
    cout<<"the factorial of "<<n<<" is:"<<fact;
    return 0;
}

