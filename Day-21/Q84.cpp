#include <iostream>
using namespace std;
//program to Convert lowercase to uppercase
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<"Uppercase: "<<str;
    return 0;
}