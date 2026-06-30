#include<iostream>
using namespace std;
//program to Develop complete mini project using arrays, strings and functions
string name[10];
int age[10],n=0;
void addPatient(){
    if(n<10){
        cout<<"Enter Patient Name: ";
        cin>>name[n];
        cout<<"Enter Age: ";
        cin>>age[n];
        n++;
        cout<<"Patient Added"<<endl;
    }
    else{
        cout<<"Hospital Full"<<endl;
    }
}
void viewPatient(){
    if(n==0){
        cout<<"No Patients"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<i+1<<". "<<name[i]<<" - "<<age[i]<<" Years"<<endl;
        }
    }
}
void searchPatient(){
    string s;
    cout<<"Enter Patient Name: ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(name[i]==s){
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Age: "<<age[i]<<endl;
            return;
        }
    }
    cout<<"Patient Not Found"<<endl;
}
void deletePatient(){
    string s;
    cout<<"Enter Patient Name: ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(name[i]==s){
            for(int j=i;j<n-1;j++){
                name[j]=name[j+1];
                age[j]=age[j+1];
            }
            n--;
            cout<<"Patient Deleted"<<endl;
            return;
        }
    }
    cout<<"Patient Not Found"<<endl;
}
int main(){
    int ch;
    do{
        cout<<"\n      Hospital Management System      "<<endl;
        cout<<"1. Add Patient"<<endl;
        cout<<"2. View Patients"<<endl;
        cout<<"3. Search Patient"<<endl;
        cout<<"4. Delete Patient"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                addPatient();
                break;
            case 2:
                viewPatient();
                break;
            case 3:
                searchPatient();
                break;
            case 4:
                deletePatient();
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