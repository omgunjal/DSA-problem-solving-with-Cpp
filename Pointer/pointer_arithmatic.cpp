// arithmatic operations of pointers
/*
    We can just perform 4 arithmatic operations on pointers:
    + , - , ++ , --

    Note: + and - operator works only in case of constant pointer.
*/

#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int i;

    int *nptr = &n;

    cout<<"origional value of nptr is:"<<nptr<<endl;

    int op;
    while(i != -1){
    cout<<"choose one opration:\n 1. +\n 2. -\n 3. ++\n 4. -- \n";
    cin>>op;
    
        switch(op){
            case 1: nptr + 32;           // ?
                    cout<<nptr<<endl;
                    break;
            case 2: nptr - 4;           // ?
                    cout<<nptr<<endl;
                    break;
            case 3: nptr++;             // here the address stored in nptr increases by 4:
                    cout<< nptr <<endl; // since, the pointer is of int type which requires 4 bytes of memory.
                    break;              // So, each increment will increase the address by 4
            
            case 4: nptr--;             // Similarly, here address in mptr will decrease by 4
                    cout<< nptr <<endl;
                    break;
            default:cout<<"wrong operator entered"<<endl;
                    break;
        }
        cout<<"would like to continue:"<<endl;
        cin>>i;
    }

    return 0;
}


