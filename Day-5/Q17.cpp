#include <iostream>
using namespace std;
// program to Check perfect number
int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(n > 1 && sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    return 0;

}