// Learn the concept of pass by reference and pass by value

#include<iostream>
using namespace std;

// swap function using pass by value
void swap1(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
} 

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a, b;
    cin>>a>>b;
    cout<<"The origional values of the a amd b are:"<<a<<"\t"<<b<<endl;

    int *aptr = &a;
    int *bptr = &b;

    // using pass by value
    swap1(a, b);
    cout<<"The swapped values using pass by value: \n a ="<<a<<"\t b ="<<b<<endl;

    // using pass by reference
    swap2(aptr, bptr);
    cout<<"The swapped values using pass by reference: \n a ="<<a<<"\t b ="<<b<<endl;

    // using pass by reference without using explicit pointers aptr and bptr
    swap2(&a, &b);
    cout<<"The swapped values using pass by reference: \n a ="<<a<<"\t b ="<<b<<endl;


    
    return 0; 
}


