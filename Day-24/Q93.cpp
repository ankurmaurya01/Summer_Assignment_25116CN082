#include <iostream>
using namespace std;
// Program to check string rotation
int main() {
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    string temp=str1+str1;
    if(temp.find(str2)!=-1)
        cout<<"String is a rotation";
    else
        cout<<"String is not a rotation";
    return 0;
}