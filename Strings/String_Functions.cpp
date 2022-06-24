#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    // ********** 1.Append **************
    // there are 2 ways of appending strings
    cout<<"\n********* 1.Append **************"<<endl;
    // 1.1) using .append function
    string s1 ="Fam",s2 ="ily";
    s1.append(s2);
    cout<<s1<<endl;

    // 1.2) using + operator
    cout<< s1+s2<<endl;
   

    // accessing the characters of string (using index)
    // NOte: index starts from 0
    cout<<"\n*********2.indexing***********"<<endl;
    cout<<"origional s1="<<s1<<endl;
    cout<<"index 4th character:"<<s1[3]<<endl;

    // 3. clear function
    string abcd = " Kaise ho bhailog";
    cout<<"\n********3. clear*************"<<endl;
    cout<<abcd<<endl;
    abcd.clear();
    cout<<abcd<<endl;
    
    // 4. compare function
    cout<<"\n********compare**********"<<endl;
    string str1= "abc", str2= "xyz";    // if ans <0 (-ve) : string1 is smaller than string2
    cout<<str1.compare(str2)<<endl;     // if ans >0 (+ve) : string1 is greater th an string2 
    
    string str3= "pqr", str4 = "pqr";
    cout<<str3.compare(str4)<<endl;     //if ans == 0 : then strings are same
    
    //check whether 2 strings are equal or not:
    if (str1.compare(str2)==0){
        cout<<"the strings are same"<<endl;
    }else{
        cout<<"The strings are different"<<endl;
    }

    // or
    if (!str1.compare(str2)){
        cout<<"The strings are equal"<<endl;
    }

    //5. empty function
    cout<<"\n********empty**********\n";
    str3.clear();
    if(str3.empty()){
        cout<<"str 3 is a empty string"<<endl;
    }

    //6. erase function
    cout<<"\n*******erase*********\n";
    string s = "timbaktooo";
    cout<<"origional s:"<<s<<endl;
    // str.erase(start_index, no.of words to delete)
    s.erase(3,4);
    cout<<s<<endl;

    //7. find funtion
    cout<<"\n********find*******\n";
    string a = "kathmandoo";
    cout<<"word:"<<a<<endl;
    cout<<a.find("man")<<endl;
    
    //8. insert
    cout<<"\n*********insert********\n";
    string b = "fort";
    cout<<b<<endl;
    cout<<b.insert(3,"ge")<<endl;

    //9. length or size function
    cout<<"\n*******length or size *********\n";
    cout<<b<<endl;
    cout<<b.length()<<endl;
    cout<<b.size()<<endl;

    //10. iterating over a string
    cout<<"\n*****iterating over a string****\n";
    cout<<b<<endl;
    for(int i=0; i<b.length(); i++){
        cout<<i<<":"<<b[i]<<endl;
    }

    //11. substr function : for getting a substring from a string
    // substring = string.substr(strart_index, no. of characters)

    cout<<"******getting stubstring:*****"<<endl;
    cout<<b<<endl;
    cout<<b.substr(3,3)<<endl;

    //12. stoi function: convert numeric string into int
    cout<<"*********stoi function***********\n";
    string c1 = "3456";
    int c2 = stoi(c1);
    cout<< c2+2<<endl;

    //12.  to_string function: convert int to numeric string 
    cout<<"*********stoi function***********\n";
    int d = 3456;
    cout<< to_string(d) + "2"<<endl;

    //13. sorting a string       :         {str.begin() & str.end() function}
    //      ^                                   ^          ^
    // (using algorithm header file) (return 1st element)(return last element)of string

    string p = "jdfaugevipsndjsdvhvsdke";
    cout<<"unsorted string:"<<p<<endl;
    sort(p.begin(), p.end()); 
    cout<<"sorted string:"<<p<<endl;

    return 0;
}