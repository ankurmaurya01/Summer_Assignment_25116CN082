#include<iostream>
using namespace std;
//program to Create library management system
int main(){
    string book;
    int ch;
    do{
        cout<<"\n      Library Management System      "<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Search Book"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter book name: ";
                cin>>book;
                cout<<"Book Added Successfully"<<endl;
                break;
            case 2:
                cout<<"Enter book name: ";
                cin>>book;
                cout<<"Book Found"<<endl;
                break;
            case 3:
                cout<<"Enter book name: ";
                cin>>book;
                cout<<"Book Issued Successfully"<<endl;
                break;
            case 4:
                cout<<"Enter book name: ";
                cin>>book;
                cout<<"Book Returned Successfully"<<endl;
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