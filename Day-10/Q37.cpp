#include <iostream>
using namespace std;
//program to Print star pyramid
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}