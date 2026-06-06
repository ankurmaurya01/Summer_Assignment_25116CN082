#include <iostream>
using namespace std;
// program to Count set bits in a number
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    while(n > 0){
        int remainder = n % 2;
        if(remainder == 1){
            count = count + 1;
        }
        n = n / 2;
    }
    cout<<"Number of set bits: "<<count<<endl;
    return 0;
}