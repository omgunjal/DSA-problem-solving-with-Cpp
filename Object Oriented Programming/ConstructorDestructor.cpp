/*
video no. 53
Constructors: 1. Default constructor
              2. Parameterized constructor
              3. default copy constructor   --> perform "shallow copy" {just copy the pointers but not the locations where they are pointing}
              4. copy constructor  --> perform "deep copy" {copies pointers as well as their locations}
                                   --> Hence, we don't use the default copy constructor.
                                   --> user defined this copy constructor

Destructor: 1. default destructor is always there.
            2. it deallocates the memory assigned for the objects of the class.
            3. it is automatically called when we execute " return 0; " statement in the main function.
                i.e. at the end of execution of the progra, --> we deallocate the memory of the variables.
            4. invoked when --> the object goes out of scope
                            --> explicitely destroyed by a call to delete

Shallow Copy:(In default copy constructor)
            ==> The object and its copy , points to the same memory address.
            ==> If you make a change in its copy --> it gets changed in the main copy as well and viceversa.

Deep Copy:(In copy constructor defined by user)
        ==> The object and its copy points to the different memory addresses.
        ==> If you make change in the copy --> It doesn't affect the main or origional copy
*/                                 

#include<iostream>
using namespace std;

// creating a class:
class student{

    // data members:
    public:  
        string name;               
        int age;
        bool gender;

    // Constructors:
    // 1. default constructor       ==> called when we create an object without passing any parameter;
    student(){
        cout<<"Default constructor is called"<<endl;
    }

    // 2. parameterized constructor ==> called when we create an object with parameters
    student(string s, int age_, bool gender_){
        cout<<"Parameterized constructor is called"<<endl;
        name = s;
        age = age_;
        gender = gender_;
    }

    // 3. default copy constructor ==> we don't use it --> because it does 'shallow copy'

    // 4. copy constructor ==> used to copy data from one object to another. (This is "deep copy")
    student(student &stud){     // "deep copy": pass address of another object of student type & copy its data member values
        cout<<"copy constructor is called"<<endl;
        name = stud.name;       
        age = stud.age;
        gender = stud.gender;
    }

    // Destructor: {doesn't take any parameter, and doesn't return anything} ==> just deallocates the memory assigned to the objects of that class
    ~student(){
        cout<<"destructor is called"<<endl;
    }

    // class methods or funcitons
    void printInfo(){
        cout<<"Name: "<<name<<" | ";
        cout<<"Age: "<< age<<" | ";
        gender==0? cout<<"male | ":cout<<"female | ";     // conditional if else.
    }

};

int main(){

    student s1("om gunjal", 21, 0);         // calling parameterized constructor

    student s2;                             // calling default constructor

    student s3 = s1;                        // calling copy constructor

    return 0;                               // at last execution destructor for all objects are called
}




