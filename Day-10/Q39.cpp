#include <iostream>
using namespace std;
//program to Print number pyramid
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k++){
            cout<<k;

        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}