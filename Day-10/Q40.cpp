#include <iostream>
using namespace std;
//program to Print character pyramid
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<i;k++){
            cout<<char(a+k-1);

        }
        for(int k=i;k>0;k--){
            cout<<char(a+k-1);
        }
        cout<<endl;
    }
    return 0;
}