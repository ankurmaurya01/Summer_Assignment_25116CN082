#include<iostream>
using namespace std;
// program to Create menu-driven string operations system
int main(){
    string str;
    int ch;
    cout<<"Enter a string: ";
    cin>>str;
    do{
        cout<<"\n      String Operations      "<<endl;
        cout<<"1. Display String"<<endl;
        cout<<"2. Find Length"<<endl;
        cout<<"3. Reverse String"<<endl;
        cout<<"4. Check Palindrome"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"String: "<<str<<endl;
                break;
            case 2:
                cout<<"Length: "<<str.length()<<endl;
                break;
            case 3:
                for(int i=str.length()-1;i>=0;i--)
                    cout<<str[i];
                cout<<endl;
                break;
            case 4:{
                int s=0,e=str.length()-1;
                bool p=true;
                while(s<e){
                    if(str[s]!=str[e]){
                        p=false;
                        break;
                    }
                    s++;
                    e--;
                }
                if(p)
                    cout<<"Palindrome"<<endl;
                else
                    cout<<"Not Palindrome"<<endl;
                break;
            }
            case 5:
                cout<<"Thank You!"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(ch!=5);
    return 0;
}