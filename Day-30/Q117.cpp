#include<iostream>
using namespace std;
//program to Create student record system using arrays and strings
int main(){
    int ch,n=0;
    string name[10],s;
    int marks[10];
    do{
        cout<<"\n      Student Record System      "<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. View Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Delete Student"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                if(n<10){
                    cout<<"Enter Name: ";
                    cin>>name[n];
                    cout<<"Enter Marks: ";
                    cin>>marks[n];
                    n++;
                    cout<<"Student Added"<<endl;
                }
                else{
                    cout<<"Record Full"<<endl;
                }
                break;

            case 2:
                if(n==0){
                    cout<<"No Records"<<endl;
                }
                else{
                    for(int i=0;i<n;i++){
                        cout<<i+1<<". "<<name[i]<<" - "<<marks[i]<<endl;
                    }
                }
                break;
            case 3:
                cout<<"Enter Name: ";
                cin>>s;
                for(int i=0;i<n;i++){
                    if(name[i]==s){
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                    }
                }
                break;
            case 4:
                cout<<"Enter Name: ";
                cin>>s;
                for(int i=0;i<n;i++){
                    if(name[i]==s){
                        for(int j=i;j<n-1;j++){
                            name[j]=name[j+1];
                            marks[j]=marks[j+1];
                        }
                        n--;
                        cout<<"Student Deleted"<<endl;
                        break;
                    }
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