#include<iostream>
using namespace std;
//program to Create quiz application 
int main(){
    int marks=0;
    int ans;
    cout<<"QUIZ APPLICATION\n";
    cout<<"                 \n";

    cout<<"Q1. What is capital of India?\n";
    cout<<"1.Mumbai\n2.Delhi\n3.Chennai\n4.Kolkata\n";
    cout<<"Enter answer:";
    cin>>ans;
    if(ans==2){
        marks++;
    }

    cout<<"\nQ2. Which is largest planet?\n";
    cout<<"1.Earth\n2.Mars\n3.Jupiter\n4.Venus\n";
    cout<<"Enter answer:";
    cin>>ans;
    if(ans==3){
        marks++;
    }

    cout<<"\nQ3. C++ is a ____ language?\n";
    cout<<"1.Procedure\n2.Object Oriented\n3.Markup\n4.Database\n";
    cout<<"Enter answer:";
    cin>>ans;
    if(ans==2){
        marks++;
    }

    cout<<"\nQ4. What is 10/2?\n";
    cout<<"1.2\n2.5\n3.10\n4.20\n";
    cout<<"Enter answer:";
    cin>>ans;
    if(ans==2){
        marks++;
    }

    cout<<"\nFINAL RESULT\n";
    cout<<"Your marks is: "<<marks<<"/4\n";
    if(marks==4){
        cout<<"Excellent\n";
    }
    else if(marks>=2){
        cout<<"Good\n";
    }
    else{
        cout<<"Try again\n";
    }
    return 0;
}