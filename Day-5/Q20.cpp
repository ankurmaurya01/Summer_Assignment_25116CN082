#include <iostream>
using namespace std;
// program to Find largest prime factor
int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    int l = -1;
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            int isPrime = 1;
            for(int j=2; j<i; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                l = i;
            }
        }
    }
    cout<<"Largest prime factor of "<<n<<" is: "<<l;
    return 0;
}