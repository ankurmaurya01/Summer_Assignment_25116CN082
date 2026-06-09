#include <iostream>
using namespace std;
//program to Print reverse star pattern
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}