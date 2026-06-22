#include <iostream>
using namespace std;
//program to Remove spaces from string
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string result="";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            result=result+str[i];
        }
    }
    cout<<"String after removing spaces: "<<result;
    return 0;
}