#include <iostream>
using namespace std;
//program to Write function to find factorial
int fact(int a){
    if (a<=1){
        return 1;
    }
    return a * fact(a-1);
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<fact(a);
    return 0;
}