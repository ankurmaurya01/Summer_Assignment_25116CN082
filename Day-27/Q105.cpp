#include<iostream>
#include<string>
using namespace std;
// program to Create student record management system
class Student{
public:
    int roll;
    string name;
    float m;
};
int main(){
    Student s[100];
    int n=0,ch,roll;
    bool found;
    do{
        cout<<"\n      Student Record Management System      ";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Search Student";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"Enter Roll Number: ";
            cin>>s[n].roll;
            cout<<"Enter Name: ";
            cin>>s[n].name;
            cout<<"Enter Marks: ";
            cin>>s[n].m;
            n++;
            cout<<"Record Added Successfully!\n";
            break;
        case 2:
            if(n==0){
                cout<<"No Records Found!\n";
            }
            else{
                cout<<"\nRoll\tName\tMarks\n";
                for(int i=0;i<n;i++){
                    cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].m<<endl;
                }
            }
            break;
        case 3:
            cout<<"Enter Roll Number to Search: ";
            cin>>roll;
            found=false;
            for(int i=0;i<n;i++){
                if(s[i].roll==roll){
                    cout<<"\nStudent Found";
                    cout<<"\nRoll Number: "<<s[i].roll;
                    cout<<"\nName: "<<s[i].name;
                    cout<<"\nMarks: "<<s[i].m<<endl;
                    found=true;
                    break;
                }
            }
            if(!found)
                cout<<"Student Not Found!\n";
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