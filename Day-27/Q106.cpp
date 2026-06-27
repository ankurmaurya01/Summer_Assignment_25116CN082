#include<iostream>
#include<string>
using namespace std;
// program to Create employee management system
struct Employee{
    int id;
    string name;
    float s;
};
int main(){
    Employee e[100];
    int n=0,ch,id;
    bool found;
    do{
        cout<<"\n      Employee Management System      ";
        cout<<"\n1. Add Employee";
        cout<<"\n2. Display Employees";
        cout<<"\n3. Search Employee";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"Enter Employee ID: ";
            cin>>e[n].id;
            cout<<"Enter Employee Name: ";
            cin>>e[n].name;
            cout<<"Enter Salary: ";
            cin>>e[n].s;
            n++;
            cout<<"Employee Added Successfully!\n";
            break;
        case 2:
            if(n==0){
                cout<<"No Employee Records Found!\n";
            }
            else{
                cout<<"\nID\tName\tSalary\n";
                for(int i=0;i<n;i++){
                    cout<<e[i].id<<"\t"<<e[i].name<<"\t"<<e[i].s<<endl;
                }
            }
            break;
        case 3:
            cout<<"Enter Employee ID to Search: ";
            cin>>id;
            found=false;
            for(int i=0;i<n;i++){
                if(e[i].id==id){
                    cout<<"\nEmployee Found";
                    cout<<"\nID: "<<e[i].id;
                    cout<<"\nName: "<<e[i].name;
                    cout<<"\nSalary: "<<e[i].s<<endl;
                    found=true;
                    break;
                }
            }
            if(!found)
                cout<<"Employee Not Found!\n";
            break;
        case 4:
            cout<<"Thank You!\n";
            break;
        default:
            cout<<"Invalid Choice!\n";
        }
    }while(ch!=4);
    return 0;
}