// given x,y,z as 3 sides of the triangle: check if it is a pythagorian triplet
// IMP Question
#include<bits/stdc++.h>
using namespace std;

int biggest(int a,int b, int c){
    int temp;
    a<b?temp=b:temp=a;
    temp<c?temp=c: temp=temp;
    return temp;
}

bool is_py_triplet(int a, int b, int c){
    int temp;
    bool flag=false;
    temp = biggest(a,b,c);
    if(temp==a){
        if(a*a == (b*b)+(c*c)){
            flag=true;
        }
    }else if(temp==b){
        if(b*b == (a*a)+(c*c)){
        flag = true;
        }
    }else{
        if(c*c == (b*b)+(a*a)){
            flag=true;
        }
    }
    return flag;

}

int main(){
    int x,y,z;
    cout<<"enter 3 numbers:";
    cin>>x>>y>>z;
    if(is_py_triplet(x,y,z)){
        cout<<"this is a pythagorian triplet"<<endl;
    }else{
        cout<<"this is not a pythagorian triplet"<<endl;
    }
    return 0;
}