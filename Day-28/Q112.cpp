#include<iostream>
using namespace std;
//program to Create contact management system
int main(){
    int ch;
    string name,ph;
    do{
        cout<<"\n      Contact Management System      "<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. View Contact"<<endl;
        cout<<"3. Update Contact"<<endl;
        cout<<"4. Delete Contact"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter name: ";
                cin>>name;
                cout<<"Enter phone: ";
                cin>>ph;
                cout<<"Contact Added"<<endl;
                break;
            case 2:
                cout<<"Name: "<<name<<endl;
                cout<<"Phone: "<<ph<<endl;
                break;
            case 3:
                cout<<"Enter new phone: ";
                cin>>ph;
                cout<<"Contact Updated"<<endl;
                break;
            case 4:
                name="";
                ph="";
                cout<<"Contact Deleted"<<endl;
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