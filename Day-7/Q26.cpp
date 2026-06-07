#include <iostream>
using namespace std;
// program to Recursive Fibonacci
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    cout<<"Fibonacci series is: ";
    for(int i=0; i<n; i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}