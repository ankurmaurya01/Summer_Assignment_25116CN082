#include<iostream>
using namespace std;
//program to Create bank account system
int main(){
    int ch;
    float bal=0,amt;
    do{
        cout<<"\n      Bank Account System      "<<endl;
        cout<<"1. Deposit"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Balance"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter amount: ";
                cin>>amt;
                bal+=amt;
                cout<<"Money Deposited"<<endl;
                break;
            case 2:
                cout<<"Enter amount: ";
                cin>>amt;
                if(amt<=bal){
                    bal-=amt;
                    cout<<"Money Withdrawn"<<endl;
                }
                else{
                    cout<<"Insufficient Balance"<<endl;
                }
                break;
            case 3:
                cout<<"Balance: "<<bal<<endl;
                break;
            case 4:
                cout<<"Thank You!"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(ch!=4);
    return 0;
}