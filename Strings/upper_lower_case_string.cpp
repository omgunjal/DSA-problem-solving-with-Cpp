/*
    code to convert a random mixed string into 1)fully uppercase or 2)fully lowercase

    Approach 1: using for loop + 32 bit diff between 'a' and 'A'
    Approach 2: using in-built function: Transform()

    syntax:     transform(strat, end, from_where, what to do{upper/lower})
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    //concept: check diff between 'a' and "A"
    char a = 'a';
    char a_cap = 'A';
    int diff = a - a_cap;
    cout<< diff<<endl;            // diff => 32

    // Hence:
    // lowercase to uppercse: substract 32 from lowercase character

    string str = "dfjeojenblahfue";
    cout<<str<<endl;
    for (int i=0; i<str.length(); i++){
        if (str[i]>='a' && str[i]>='z'){
            str[i] -=32 ;
        }     
    }
    cout<<str<<endl;

    // uppercase to lowercase: Add 32 to uppercase character
    for (int i=0; i<str.length(); i++){
        if (str[i]>='A' && str[i]>='Z'){
            str[i] +=32 ;
        } 
    }
    cout<<str<<endl;

    // using transform function:
    cout<<"using transform function"<<endl;
    //1. lowercase to uppercase
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    //2. uppercase to lowercase 
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
    
}