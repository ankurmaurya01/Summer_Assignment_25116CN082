#include <iostream>
using namespace std;
// program to Convert decimal to binary
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int rem;
    int result = 0;
    int power = 1;
    while(n > 0){
        rem = n % 2;
        n = n / 2;
        result = result + rem * power;
        power = power * 10;
    }
    cout<<"Binary: "<<result<<endl;
    return 0;
}