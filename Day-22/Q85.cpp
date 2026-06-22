#include <iostream>
using namespace std;
//program to Check palindrome string
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int start=0;
    int end=str.length()-1;
    bool isPalin=true;
    while(start<end){
        if(str[start]!=str[end]){
            isPalin=false;
            break;
        }
        start++;
        end--;
    }
    if(isPalin){
        cout<<str<<" is a palindrome"<<endl;
    }
    else{
        cout<<str<<" is not a palindrome"<<endl;
    }
    return 0;
}