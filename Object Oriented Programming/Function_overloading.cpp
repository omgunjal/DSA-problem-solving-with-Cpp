/*
 function oveloading:
    --> Functions having same name but different definations.
    --> the invoked function will depend on the arguments we pass to the function
    i.e.
    --> When the class has two or more fucntions with the same name and different body ==> compiler chooses which function to call based on the parameters passed.
*/
#include<iostream>
using namespace std;


class CalculateArea{

    // data members
    public:
    float r;
    float l,b;

    // methods:
    public:
    void area(float radius){
        r = radius;
        float area = 3.14 * r * r;
        cout<<"The area of circle is: "<<area<<endl;
    }

    void area(float length, float breadth){
        l=length;
        b = breadth;

        float area =l*b;
        cout<<"The area of the rectangle is : "<<area<<endl; 
    }


};
int main(){

    CalculateArea circle;
    circle.area(1);             // for circle : 1 parameter

    CalculateArea rect;
    rect.area(4,5);             // for rectangle : 2 parameters


    return 0;
}