#include <iostream>
using namespace std;
//program to Print reverse pyramid
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=2*i-1;k>0;k--){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}