// find whether a number is armstrong or not
// what is armstrong number?
/*
        153:  1 --> 1^3 = 1
              5 --> 5^3 = 125
              3 --> 3^3 = 27

                and 1 + 125 + 27 = 153
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dig=0,sum=0, orig =n; 
    while(n>0){
        dig = n%10;
        n = n/10;
        sum = sum + (dig*dig*dig);
    }
    if (sum==orig){
        cout<<"The number is armstrong";
    }else{
        cout<<"This number is not an armstrong number";
    }
    return 0;
}

/*
        OR

    we can include
    #include<math.h>
    and then use function
    pow(dig,3);
    to find the cube.
*/