#include<iostream>
using namespace std;
// program to Create menu-driven calculator
int main(){
    int ch;
    float a,b;
    do{
        cout<<"\n      Menu Driven Calculator      "<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        if(ch>=1 && ch<=4){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        switch(ch){
            case 1:
                cout<<"Result: "<<a+b<<endl;
                break;
            case 2:
                cout<<"Result: "<<a-b<<endl;
                break;
            case 3:
                cout<<"Result: "<<a*b<<endl;
                break;
            case 4:
                if(b!=0)
                    cout<<"Result: "<<a/b<<endl;
                else
                    cout<<"Cannot divide by zero"<<endl;
                break;
            case 5:
                cout<<"Thank You!"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(ch!=5);
    return 0;
}