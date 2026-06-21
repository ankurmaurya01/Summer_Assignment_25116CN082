#include <iostream>
using namespace std;
//program to Reverse a string
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    int start=0,end=len-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed string: "<<str;
    return 0;
}