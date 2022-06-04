// // print all the prime numbers between a and b

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter a and b:";
//     cin>>a>>b;

//     for(int num=a; num<=b; num++){
//         if (num!=1){
//             int flag=1;
//             for (int i=2; i<=num/2; i++){
//                 if(num%i==0){
//                     flag = 0;
//                     break;
//                 }
//             }
//             if(flag==1){
//                 cout<<num<<',';
//             }
//         }
//     }
//     return 0;
// }

// ---------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;

    for(int num = a; num<=b; num++){  // gives me the numbers
        if(num != 1){
            bool flag = true;
            for(int j = 2; j< num; j++){
                if(num%j == 0){
                    flag = false;
                    break;
                }
            }
            //cout<<"flag = "<<flag<<" "<<endl;
            if(flag){
                //cout<<"printing";
                cout<<num<<" ,";
            }
        }
        
    }

    return 0;
}