
#include <iostream>
using namespace std;
// program to Find x^n without pow()
int main(){
    int x, n;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter exponent: ";
    cin>>n;
    int result = 1;
    for(int i=0; i<n; i++){
        result = result * x;
    }
    cout<<x<<"^"<<n<<" = "<<result<<endl;
    return 0;
}