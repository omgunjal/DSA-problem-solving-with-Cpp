// Here we will learn the different ways to declare , input and output strings
// We use "string"  keyword to declare a string and need to include string header file

#include<iostream>
#include<string>
using namespace std;

int main(){

    // 1st way : initialize the string int double quotes.(Note: No Space since:only 1st world will be considered)
    string str1 = "GoogleVsApple";
    cout<<str1<<endl;
    
    // 2: To input the whole sentence as a string , use getline function
    string str3;
    cout<<"enter a sentence string:"<<endl;
    getline(cin, str3);
    cout<<str3<<endl;

    // 3:we can input a single word string using cin
    string str2;
    cout<<"enter a 1 word string"<<endl;
    cin>>str2;
    cout<<str2<<endl;

    // 4:To declre a string with n times some fix character:
    string str4(5, 'k');
    cout<<str4<<endl;
    
    return 0;
}

