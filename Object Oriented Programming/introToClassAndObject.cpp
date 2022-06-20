/*
video no. : 53
 here we will learn some concepts:
    1. Class defination ==> class is an user defined datatype.
    2. Creating objects or instances of the class.
    3. Access specifiers ==> by deafault private; --> public and protected are also there
    4. Data members and functions --> Accessing them using objects by '.' operator.
    5. To Access private data members and functions outside the class
                    ==> use getter(outputs the value of private data member) 
                            & setter(assigns value to private data member) methods.
    6. Creating array of objects
*/

#include<iostream>
using namespace std;

// creating a class:
class student{

    // data members:
    string name;            // by default private(Access specifier)
    public:                 // or we can declare them as public
        int age;
        bool gender;

    // Getter-Setter methods ==> To access private data member (i.e. 'name' here) outside the class

    void getname(){              // to get the value of name outside the class
        cout<<name<<endl;
    }
    void setname(string s){      // setting the value of name from outside the class
        name = s;
    } 

    // class methods or funcitons
    void printInfo(){
        cout<<"Name: "<<name<<" | ";
        cout<<"Age: "<< age<<" | ";
        gender==0? cout<<"male | ":cout<<"female | ";     // conditional if else.
    }

    void print_name(); // funtion declaration
};

// defining class method outside the class:  using : "scope resolution operator" i.e. '::'
void student::print_name(){     // funciton defination
    cout<<name;
}

int main(){

    // -->create the object of the student class
    student stud1;
    //cin>>stud1.name;   ==> gives error since, name is a private element -> can't be accessed outside the class
    string s; cin>>s;       
    stud1.setname(s);
    cin >> stud1.age;   // input assigned
    stud1.gender = 1;  // direct assignment

    stud1.printInfo();  // accessing function through object

    // -->Create an array of objects
    student studArr[3];
    for(int i=0; i<3; i++){
        string sName;
        cout<<" Enter name: "<<endl;
        cin>>sName;
        studArr[i].setname(sName);
        cout<<"Enter age: "<<endl;
        cin>>studArr[i].age;
        cout<<"Enter gender: "<<endl;
        cin>>studArr[i].gender;
    }

    // print all the objects in array
    for(int j=0; j<3;j++){
        studArr[j].printInfo();
        cout<<endl;
    }


    return 0;
}

