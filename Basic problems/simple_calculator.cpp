#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char operation;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    cout<<"enter operator";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<(n1+n2);
        break;
    case '-':
        cout<<(n1-n2);
        break;
    default:
        cout<<"use + or - operator please";
        break;
    }
    return 0;
}


