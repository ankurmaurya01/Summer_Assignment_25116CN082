#include<iostream>
using namespace std;
//program to Create inventory management system
int main(){
    int ch,qty=0,n;
    string item;
    do{
        cout<<"\n      Inventory Management System      "<<endl;
        cout<<"1. Add Item"<<endl;
        cout<<"2. Remove Item"<<endl;
        cout<<"3. View Inventory"<<endl;
        cout<<"4. Update Item Name"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter item name: ";
                cin>>item;
                cout<<"Enter quantity: ";
                cin>>n;
                qty+=n;
                cout<<"Item Added Successfully"<<endl;
                break;
            case 2:
                cout<<"Enter quantity to remove: ";
                cin>>n;
                if(n<=qty){
                    qty-=n;
                    cout<<"Item Removed"<<endl;
                }
                else{
                    cout<<"Not Enough Stock"<<endl;
                }
                break;
            case 3:
                cout<<"Item Name: "<<item<<endl;
                cout<<"Stock: "<<qty<<endl;
                break;
            case 4:
                cout<<"Enter new item name: ";
                cin>>item;
                cout<<"Item Name Updated"<<endl;
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