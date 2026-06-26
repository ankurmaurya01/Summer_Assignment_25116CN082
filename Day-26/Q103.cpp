#include<iostream>
using namespace std;
//program to Create ATM simulation
int main(){
    int pin=1234,epin,choice;
    double bal=10000,amt;
    cout<<"Enter ATM PIN:";
    cin>>epin;
    if(epin==pin){
        do{
            cout<<"\n     ATM MENU     \n";
            cout<<"1.Check Balance\n";
            cout<<"2.Deposit\n";
            cout<<"3.Withdraw\n";
            cout<<"4.Exit\n";
            cout<<"Enter choice:";
            cin>>choice;

            switch(choice){
                case 1:
                    cout<<"balance:"<<bal<<endl;
                    break;

                case 2:
                    cout<<"Enter deposit amount:";
                    cin>>amt;
                    bal+=amt;
                    cout<<"Deposited\nNew Balance:"<<bal<<endl;
                    break;

                case 3:
                    cout<<"Enter withdraw amount:";
                    cin>>amt;
                    if(amt<=bal){
                        bal-=amt;
                        cout<<"Withdraw successful\nRemaining:"<<bal<<endl;
                    }else{
                        cout<<"Insufficient balance\n";
                    }
                    break;

                case 4:
                    cout<<"Exit successful\n";
                    break;

                default:
                    cout<<"Invalid choice\n";
            }

        }while(choice!=4);
    }else{
        cout<<"Wrong PIN\n";
    }

    return 0;
}