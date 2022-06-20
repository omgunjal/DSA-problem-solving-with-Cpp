// operator overloading


#include<iostream>
using namespace std;

// creating a class:
class student{

    // data members:
    public:   
        string name;              
        int age;
        bool gender;

    // constructor
    student(string name_, int age_, bool gender_){
        name = name_;
        age = age_; 
        gender = gender_;
    }

    // class methods or funcitons
    void printInfo(){
        cout<<"Name: "<<name<<" | ";
        cout<<"Age: "<< age<<" | ";
        gender==0? cout<<"male | ":cout<<"female | ";     // conditional if else.
    }

    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Object Overloading!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // to check is the objects are equal or not?
    // object overloading of '==' operator
    bool operator == (student &s){      // passing an object reference of student class
        if(name == s.name && age == s.age && gender == s.gender){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    student s1("om", 21, 0);
    student s2("pushpak",30, 1);
    student s3("om",21, 0);


    // comparing if two objects are equal or not:
    //(using operator overloading on '==' operator)
    
    if(s1 == s2){       // since s1 and s2 have datatype student(which is not an default dta type), 
                        // we need to overload the operator '==' to compare these two objects of the student class 
        cout<<" s1 and s2 aresame objects"<<endl;
    }else{
        cout<<" s1 and s2 are different objects"<<endl;
    }


    if(s1 == s3){
        cout<<"s1 and s3 are same objects"<<endl;
    }else{
        cout<<"s1 and s3 are different objects"<<endl;
    }

    return 0;
}
// if we have complex class and we want to add two complex numbers:
// complex operator + (complex num1, complex num2){
//     complex ans;
//     ans.real = num1.real + num2.real;
//     ans.imag = num1.imag + num2.imag;
//     return ans;
// }