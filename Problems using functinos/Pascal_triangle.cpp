// program to print the pascal triangle
/*
        1               i.e. 0C0
        1 1                  1C0 1C1
        1 2 1                2C0 2C1 2C2
        1 3 3 1              3C0 3C1 3C2 3C3
        1 4 6 4 1            4C0 4C1 4C2 4C3 4C4  i.e t(i,j) = iCj
*/

#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for (int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    return fact(n)/(fact(n-r)* fact(r));
}

void pascal(int limit){
    for (int i=0; i<limit; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<' ';
        }
        cout<<endl;
    }
}

int main(){
    int lim;
    cout<<"enter the limit:";
    cin>>lim;
    pascal(lim);
    return 0;
}



