#include<iostream>
using namespace std;
// program to Create mini employee management system
int main(){
    int ch,sal=0;
    string emp="";
    do{
        cout<<"\n      Mini Employee Management System      "<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. View Employee"<<endl;
        cout<<"3. Update Salary"<<endl;
        cout<<"4. Remove Employee"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter Employee Name: ";
                cin>>emp;
                cout<<"Enter Salary: ";
                cin>>sal;
                cout<<"Employee Added"<<endl;
                break;
            case 2:
                if(emp=="")
                    cout<<"No Employee Found"<<endl;
                else{
                    cout<<"Name: "<<emp<<endl;
                    cout<<"Salary: "<<sal<<endl;
                }
                break;
            case 3:
                if(emp=="")
                    cout<<"No Employee Found"<<endl;
                else{
                    cout<<"Enter New Salary: ";
                    cin>>sal;
                    cout<<"Salary Updated"<<endl;
                }
                break;
            case 4:
                if(emp=="")
                    cout<<"No Employee Found"<<endl;
                else{
                    emp="";
                    sal=0;
                    cout<<"Employee Removed"<<endl;
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