#include <iostream>
using namespace std;
//program to Write function to check prime
int prime(int a){
    if (a<=1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0)
          return 0;
    }
    return 1;
}
int main(){
    int a;
    cout<<"Enter the number to check prime or not :";
    cin>>a;
    if(prime(a)==0){
        cout<<a<<" is not prime";
    }
    else{
        cout<<a<<" is Prime";
    }
    return 0;
}