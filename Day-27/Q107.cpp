#include<iostream>
using namespace std;
//program to Create salary management system
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
        cout<<"\n      Salary System      ";
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employees";
        cout<<"\n3.Search Employee";
        cout<<"\n4.Manage Salary";
        cout<<"\n5.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"Enter ID: ";
            cin>>e[n].id;
            cout<<"Enter Name: ";
            cin>>e[n].name;
            cout<<"Enter Salary: ";
            cin>>e[n].s;
            n++;
            cout<<"Added Successfully!\n";
            break;
        case 2:
            if(n==0){
                cout<<"No records found!\n";
            }else{
                cout<<"\nID\tName\tSalary\n";
                for(int i=0;i<n;i++){
                    cout<<e[i].id<<"\t"<<e[i].name<<"\t"<<e[i].s<<endl;
                }
            }
            break;
        case 3:
            cout<<"Enter ID to search: ";
            cin>>id;
            found=false;
            for(int i=0;i<n;i++){
                if(e[i].id==id){
                    cout<<"\nEmployee Found";
                    cout<<"\nID: "<<e[i].id;
                    cout<<"\nName: "<<e[i].name;
                    cout<<"\nSalary: "<<e[i].s;
                    found=true;
                    break;
                }
            }
            if(!found)
                cout<<"Not Found!\n";
            break;
        case 4:
            cout<<"Enter ID to update salary: ";
            cin>>id;
            found=false;
            for(int i=0;i<n;i++){
                if(e[i].id==id){
                    cout<<"Enter New Salary: ";
                    cin>>e[i].s;
                    cout<<"Salary Updated Successfully!\n";
                    found=true;
                    break;
                }
            }
            if(!found)
                cout<<"Employee Not Found!\n";
            break;
        case 5:
            cout<<"Exit...\n";
            break;
        default:
            cout<<"Invalid choice!\n";
        }
    }while(ch!=5);
    return 0;
}