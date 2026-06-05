#include <iostream>
using namespace std;
// program to Print factors of a number
int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    cout<<"Factors of "<<n<<" are: ";
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}