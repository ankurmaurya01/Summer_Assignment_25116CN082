#include <iostream>
using namespace std;
//program to Print half pyramid pattern
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    char a;
    cout<<"Enter pattern : ";
    cin>>a;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<a;
        }
        cout<<endl;

    }
    return 0;

}