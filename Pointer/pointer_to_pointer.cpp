/*
                        memory address      memory      
    int a = 10;           2000               a = 10

    int *p = &a;          4000               p = 2000
                                          & *p = 10

    int **q = &p;         8000               q = 4000
                                            *q = 2000
                                           **q = 10
*/

#include<iostream>
using namespace std;

int main(){

    int a = 10;

    int *p = &a;

    int **q = &p;

    cout<<"q = "<<q<<endl;
    cout<<"*q = "<<*q<<endl;
    cout<<"**q = "<<**q<<endl;
    return 0;
}