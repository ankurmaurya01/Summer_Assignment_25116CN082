#include<iostream>
using namespace std;
//program to Create mini library system
int main(){
    int ch;
    string book="";
    bool issued=false;
    do{
        cout<<"\n      Mini Library System      "<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. View Book"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter Book Name: ";
                cin>>book;
                issued=false;
                cout<<"Book Added"<<endl;
                break;
            case 2:
                if(book=="")
                    cout<<"No Book Available"<<endl;
                else{
                    cout<<"Book: "<<book<<endl;
                    if(issued)
                        cout<<"Status: Issued"<<endl;
                    else
                        cout<<"Status: Available"<<endl;
                }
                break;
            case 3:
                if(book=="")
                    cout<<"No Book Available"<<endl;
                else if(issued)
                    cout<<"Book Already Issued"<<endl;
                else{
                    issued=true;
                    cout<<"Book Issued"<<endl;
                }
                break;
            case 4:
                if(book=="")
                    cout<<"No Book Available"<<endl;
                else if(!issued)
                    cout<<"Book Already Available"<<endl;
                else{
                    issued=false;
                    cout<<"Book Returned"<<endl;
                }
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