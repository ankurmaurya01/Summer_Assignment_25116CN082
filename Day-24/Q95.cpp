#include<iostream>
using namespace std;
//program to Find longest word
int main(){
    string str,l,w;
    cout<<"Enter a sentence: ";
    getline(cin,str);
    for(int i=0;i<=str.length();i++){
        if(str[i]==' ' || str[i]=='\0'){
            if(w.length()>l.length())
                l=w;
            w="";
        }
        else{
            w=w+str[i];
        }
    }
    cout<<"Longest word: "<<l;
    return 0;
}