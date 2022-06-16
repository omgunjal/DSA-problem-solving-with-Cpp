// find the word with maximum length in the given sentence

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();   // needed to use getline method

    char sent[n+1];         // sent means sentence
    cin.getline(sent, n);
    cin.ignore();

    int max_len=0, crt_len=0, i=0;
    int st =0, max_st=0;

    while(true){
        if(sent[i]==' '|| sent[i]=='\0'){
            if (crt_len > max_len){
                max_len = crt_len;
                max_st = st;
            }
            crt_len = 0;
            st = i+1;
        }
        else{
            crt_len++;
        }

        if(sent[i]=='\0'){      // stopping criteria : '\0' is character representing 'end of line'
            break;  
        }
        i++;
    }

    cout<<"the maximum len is:"<<max_len<<endl;
    cout<<"the word is:";
    for (int i=0; i<max_len; i++){
        cout<<sent[i+max_st];
    }

    return 0;
}

/*
int main(){
    int n; 
    cin>>n;
    cin.ignore();
    char sentence[n];
    cin.getline(sentence, n);
    cin.ignore();

    int crtlen=0, maxlen=0, i=0, st=0, maxst=0;
    
    while(true){
    
        if(sentence[i] == ' ' || sentence[i]=='\0'){
            if(crtlen>maxlen){
                maxlen = crtlen;
                maxst = st;
            }
            crtlen = 0;
            st = i+1;
        }
        else{
            crtlen++;
        }

        if (sentence[i]=='\0'){     
            break;
        }
        i++;
    }

    cout<<"maximum length is:"<<maxlen<<endl;
    cout<<"The word with maximum length is:";
    for (int i=maxst; i< maxst + maxlen; i++){      // change in this for loop only when compared with above code
        cout<<sentence[i];
    }
return 0;
}

*/