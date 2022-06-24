/*
    problem statement: Write a code to find the maximum occuring char in a string

    Approach:
    1)We will define array of size 26 {since, 26 characters a-z}
    2)Then, loopin over the string:
        2.1) increase the count of that specific character.
    3)print the character with most number of count
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    //cout<<int('a')<<"  "<<int('b')<<"\tdiff:"<<'b'-'a'<<endl;  // 'b'-'a' => 1 (index of 'b')
    // In this way, 'a'-'a' =0 i.e. index of 'a' in the array
    // and similarly, for others.

    // define a array
    int freq[26] = {0};

    // iterating over the string
    for(int i=0; i<str.length(); i++){
        freq[str[i] - 'a'] += 1; 
    }

    // finding the character with most frequency:
    int max_f = INT_MIN;
    char max_ch;
    for (int j=0; j<26; j++){
        if(freq[j]>max_f){
            max_f = freq[j];
            max_ch = 'a'+ j;
        }
    }
    cout<<"The most frequency is of char:\n"<<max_ch<<":"<< max_f<<endl;

    return 0;
}