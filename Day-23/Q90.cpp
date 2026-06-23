#include<iostream>
using namespace std;
// Program to find first repeating character
int main(){
    string str;
    int i,j;
    cin>>str;
    for(i=0;i<str.length();i++){
        for(j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cout<<str[i];
                return 0;
            }
        }
    }
    cout<<"No repeating character";
    return 0;
}