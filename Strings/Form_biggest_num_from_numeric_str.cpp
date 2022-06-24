/*
    problem statement: Form biggest number from a given numeric string
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "473499264758";
    cout<<"Origional numerc string is:"<<str<<endl;

    // for getting the largest number: we need to sort the string
    sort(str.begin(), str.end(), greater<int>());   
    // greater<int> is the argument for sorting in descending order
    // greater<int> or greater<char> : doesn't matter.

    cout<<"The sorted numeric string is:"<<str<<endl;

    return 0;
}
