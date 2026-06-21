#include <iostream>
using namespace std;
//program to Find string length without strlen()
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    cout<<"Length of string is: "<<len;
    return 0;
}