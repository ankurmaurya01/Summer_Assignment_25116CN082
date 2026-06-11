#include <iostream>
using namespace std;
//rogram to Write function to find sum of two numbers
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"sum of two number is "<<sum(a,b);
    return 0;
}