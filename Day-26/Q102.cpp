#include<iostream>
using namespace std;
//program to Create voting eligibility system
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)
        cout<<"You are eligible to vote."<<endl;
    else
        cout<<"You are not eligible to vote."<<endl;
    return 0;
}