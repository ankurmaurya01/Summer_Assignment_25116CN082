#include<iostream>
using namespace std;
//program to Create marksheet generation system
struct Student{
    int roll;
    string name;
    float m1,m2,m3;
    float total,per;
};
int main(){
    Student s;
    int choice;
    cout<<"\n      Marksheet Generation System      ";
    cout<<"\nEnter Roll Number: ";
    cin>>s.roll;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Marks of 3 Subjects: ";
    cin>>s.m1>>s.m2>>s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.per = s.total / 3;
    cout<<"\n MARKSHEET ";
    cout<<"\nRoll No : "<<s.roll;
    cout<<"\nName    : "<<s.name;
    cout<<"\nMarks 1 : "<<s.m1;
    cout<<"\nMarks 2 : "<<s.m2;
    cout<<"\nMarks 3 : "<<s.m3;
    cout<<"\nTotal   : "<<s.total;
    cout<<"\nPercent : "<<s.per;
    if(s.per>=40)
        cout<<"\nResult  : PASS";
    else
        cout<<"\nResult  : FAIL";

    return 0;
}