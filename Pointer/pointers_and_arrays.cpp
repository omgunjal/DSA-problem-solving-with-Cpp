/*
    NOTE: This program works , there is no actual error. it is showing that because of some compiler issue

      memory => {2000, 2001, 2002 2003}
    int arr[] = {1 , 2 , 3 , 4} 
                 ^
                 |
                arr => 2000 i.e. address of the 1st element of array
           &   *arr => 1    i.e. value of the 1st element(accessed through arr which is a constant pointer )
                 
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10 , 20 , 30 , 40};
    
    int *ptr = arr;
     // here, we don't need to give &arr since arr is already a constant pointer pointing at the 1st element of the array;

    // traversing the elements of the array using ptr;
    cout<<"Traversing using separate pointer ptr"<<endl;
    for (int i=0; i<4; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    // traversing the elements of the array using arr i.e. constant pointer;
    cout<<"traversing using arr:"<<endl;
    for (int i=0; i<4 ; i++){
        cout<<*(arr+i)<<endl;       // here we are doing (arr+i). but why not (arr+4i)? (since int = 4bytes)
                                    // because here, arr is an indexing pointer. it point to index of array.
                                    // Also, arr is unmodifiable; since it is constant pointer.
                                    // despite of arr being unmodifiable, we modify it by adding or subtracting i. 

    }

    return 0;
}

