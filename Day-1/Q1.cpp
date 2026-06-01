#include <iostream>
using namespace std;
//program to Calculate sum of first N natural numbers
int main(){
    int n;
    cout<<"Enter the value of N to find the sum of first N natural number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
    return 0;

}