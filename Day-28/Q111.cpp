#include<iostream>
using namespace std;
// program to Create ticket booking system
int main(){
    int ch,t=10,b=0,n;
    do{
        cout<<"\n      Ticket Booking System      "<<endl;
        cout<<"1. Book Ticket"<<endl;
        cout<<"2. Cancel Ticket"<<endl;
        cout<<"3. Available Tickets"<<endl;
        cout<<"4. View Booked Tickets"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter number of tickets: ";
                cin>>n;
                if(n<=t){
                    t-=n;
                    b+=n;
                    cout<<"Ticket Booked Successfully"<<endl;
                }
                else{
                    cout<<"Tickets Not Available"<<endl;
                }
                break;
            case 2:
                cout<<"Enter number of tickets to cancel: ";
                cin>>n;
                if(n<=b){
                    t+=n;
                    b-=n;
                    cout<<"Ticket Cancelled"<<endl;
                }
                else{
                    cout<<"Invalid Number"<<endl;
                }
                break;
            case 3:
                cout<<"Available Tickets: "<<t<<endl;
                break;
            case 4:
                cout<<"Booked Tickets: "<<b<<endl;
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