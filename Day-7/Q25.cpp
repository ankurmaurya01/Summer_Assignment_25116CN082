#include <iostream>
using namespace std;
// program to Recursive factorial
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int a;
    cout<<"Enter value for factorial : ";
    cin>>a;
    cout<<"Factorial of "<<a<<" is : "<<fact(a);
    return 0;
}