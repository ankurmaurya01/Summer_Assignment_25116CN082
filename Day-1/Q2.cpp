#include <iostream>
using namespace std;  
//program to Print multiplication table of a given number  
int main(){
    int n;
    cout<<"Enter the value of N to print the multiplication table: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}