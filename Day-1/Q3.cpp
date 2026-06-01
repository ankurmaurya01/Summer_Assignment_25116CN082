#include <iostream>
using namespace std;
//program to Find factorial of a number
int main(){
    int n;
    cout<<"Enter the value of N to find the factorial: ";
    cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}