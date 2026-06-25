#include <iostream>
using namespace std;
//program to Find common characters in strings
int main(){
    string s1,s2;
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter string 2: ";
    cin>>s2;
    cout<<"Common characters: ";
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                cout<<s1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}