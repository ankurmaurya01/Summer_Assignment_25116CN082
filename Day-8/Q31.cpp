#include <iostream>
using namespace std;
//program to Print character triangle
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char(a + j);
        }
        cout<<endl;

    }

    return 0;
}