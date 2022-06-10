// code for conversion between binary, octal, decimal, hexadecimal

#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
    int rev=0, rem=0;
    while(num>0){
        rem = num%10;
        rev = rev*10 + rem;
        num /=10; 
    }
    return rev;
}

int binaryToDecimal(int n){
    int rem, power=1, ans=0;
    while(n>0){                     //for 1st iteration:
        rem = n%10;                 //getting last digit
        ans += (rem * power);       //ans = ans + (2^0 * last digit) 
        n = n/10;                   //updating number i.e removing the last dig from number
        power *= 2;                 //updating the power i.e 2^0 then 2^1,2^2,... in further attempts
    } 
    return ans;
}

int octalToDecimal(int n){
    int rem, power=1, ans=0;
    while(n>0){
        rem = n%10;
        ans += rem * power;
        power *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n){
    int ans =0, power =1;
    int s = n.size();
    for (int i =s-1; i>=0; i--){
        if(n[i]>='0'&& n[i]<='9'){
            ans += power*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += power * ((n[i] -'A')+10);
        }
        power *=16;
    }
    return ans;
}

int decimalToBinary(int n){
    int ans=0,rem;
    while(n>0){
        rem = n%2;
        n = n/2;
        ans = ans*10 +rem;
    }
    return reverse(ans);
}

int decimalToOctal(int n){
    int ans=0,rem;
    while(n>0){
        rem = n%8;
        n = n/8;
        ans = ans*10 +rem;
    }
    return reverse(ans);
}


int main(){

    int choice, num;
    //cout<<"choose:\n 1. binary to decimal\n 2. octal to decimal\n 3. hexadecimal to decimal\n 4. decimal to binary\n 5. decimal to octal\n 6. decimal to hexadecimal\n 7. binary to octal\n 8. octal to binary\n 9. binaty to hexadecimal\n 10. hexadecimal to binary\n 11. octal to hexadecimal\n 12. hexadecimal to octal\n";
    //cin>>choice;
    string n;
    cin>>num;
    cout<<decimalToOctal(num);
    return 0;
}