#include <iostream>
using namespace std;
// program to Convert binary to decimal
int main(){
    int bin;
    cout<<"Enter a binary number: ";
    cin>>bin;
    int dec = 0;
    int power = 1;
    while(bin > 0){
        int digit = bin % 10;
        bin = bin / 10;
        dec = dec + digit * power;
        power = power * 2;
    }
    cout<<"Decimal number: "<<dec<<endl;
    return 0;
}