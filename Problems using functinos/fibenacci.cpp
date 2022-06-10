// write a code to print the fibonacci series upto the given number of terms

#include<iostream>
using namespace std;

void fibo(int n){
    int t1=0,t2=1,nxt_term;
    for (int i=1; i<=n; i++){
        cout<<t1<<' ';
        nxt_term = t1 +t2;
        t1 = t2;
        t2 = nxt_term;
    }
    return;
}

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    fibo(n);
    return 0;
}

