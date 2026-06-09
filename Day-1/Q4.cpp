#include <iostream>
using namespace std;
// Program to count digits in a number
int main(){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int temp = n;
    int count = 0;
    while(temp > 0){
        temp = temp/10;
        count++;
    }
    cout<<"Number of digits in "<<n<<" is "<<count;
    return 0;
}
