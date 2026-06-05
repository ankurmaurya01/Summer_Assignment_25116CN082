#include <iostream>
using namespace std;
// program to Check strong number
int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    int temp = n;
    int sum = 0;
    while(temp > 0){
        int digit = temp % 10;
        temp = temp / 10;
        int fact = 1;
        for(int i=1; i<=digit; i++){
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if(sum == n)
        cout<<n<<" is a strong number";
    else
        cout<<n<<" is not a strong number";

    return 0;
}