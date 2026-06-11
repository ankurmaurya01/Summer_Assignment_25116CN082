#include <iostream>
using namespace std;
// program to Write function to find maximum
int max(int a,int b){
    return (a > b) ? a : b;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Maximum is "<<max(a,b);
    return 0;
}