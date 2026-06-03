#include <iostream>
using namespace std;

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;i++) if(n % i == 0) return 0;
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    if(!(cin>>n)) return 0;
    if(isPrime(n)) cout<<n<<" is prime"<<endl;
    else cout<<n<<" is not prime"<<endl;
    return 0;
}