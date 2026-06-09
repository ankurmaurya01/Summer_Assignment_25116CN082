#include <iostream>
using namespace std;
//program to Print reverse number triangle
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}