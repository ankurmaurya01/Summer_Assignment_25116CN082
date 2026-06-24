#include<iostream>
using namespace std;
//program to Remove duplicate characters
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                str.erase(j,1);
                j--;
            }
        }
    }
    cout<<"After removing duplicates: "<<str;
    return 0;
}