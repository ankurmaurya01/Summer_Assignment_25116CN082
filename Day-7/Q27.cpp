#include <iostream>
using namespace std;
// program to Recursive sum of digits
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n % 10 + sum(n / 10);
}
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is : "<<sum(n);
    return 0;
}