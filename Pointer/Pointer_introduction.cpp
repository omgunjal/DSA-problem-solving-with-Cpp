// declare the pointer and access a variable using pointer
/*
    int a = 10;         2001|a = 10 |
                        2002|       |
                        2003|       |
                        2004|       |

    int *aptr = &a;      4001|aptr = 2001|   since: &a = 2001 i.e. address of a
                        4002|           |
                        4003|           |
                        4004|           |

    pointer contains the address of the variable passed to it

    int *ptr = &a;  =>means that ptr is pointing to the variable a
    ptr => contains the address of variable a
    *ptr => contains the value of variable a


D-referencing : *ptr = 5 // modifying
                cout<<*ptr; // accessing
             accessing or modifying values of variable using its pointer is called D-referencing.
*/

#include<iostream>
using namespace std;

int main(){
    //declaring a variable
    int a = 10;

    // decalring an pointer
    int *aptr;

    // initializing the pointer to variabl a
    aptr = &a;

    // accessing the value stored in the pointer variable
    cout<<aptr<<endl;

    // accessing the value in a using pointer (known as D referencing)
    cout<<*aptr<<endl;

    // changing the value of 'a' using pointer
    *aptr = 73;

    cout<<*aptr<<endl;
    cout<<a<<endl;

    return 0;
}