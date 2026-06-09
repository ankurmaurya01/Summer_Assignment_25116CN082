#include <iostream>
using namespace std;
//program to Print repeated character pattern
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    char a='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(a + i);
        }
        cout<<endl;

    }

    return 0;
}