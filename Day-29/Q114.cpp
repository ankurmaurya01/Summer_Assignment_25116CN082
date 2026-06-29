#include<iostream>
using namespace std;
//program to Create menu-driven array operations system
int main(){
    int a[10],n,ch;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    do{
        cout<<"\n      Array Operations      "<<endl;
        cout<<"1. Display Array"<<endl;
        cout<<"2. Find Maximum"<<endl;
        cout<<"3. Find Minimum"<<endl;
        cout<<"4. Find Sum"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Array: ";
                for(int i=0;i<n;i++)
                    cout<<a[i]<<" ";
                cout<<endl;
                break;
            case 2:{
                int max=a[0];
                for(int i=1;i<n;i++)
                    if(a[i]>max)
                        max=a[i];
                cout<<"Maximum: "<<max<<endl;
                break;
            }
            case 3:{
                int min=a[0];
                for(int i=1;i<n;i++)
                    if(a[i]<min)
                        min=a[i];
                cout<<"Minimum: "<<min<<endl;
                break;
            }
            case 4:{
                int sum=0;
                for(int i=0;i<n;i++)
                    sum+=a[i];
                cout<<"Sum: "<<sum<<endl;
                break;
            }
            case 5:
                cout<<"Thank You!"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=5);
    return 0;
}