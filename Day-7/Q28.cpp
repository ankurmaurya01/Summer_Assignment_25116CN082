#include <iostream>
using namespace std;
// program to Recursive reverse number
int rev(int n, int temp){
    if(n == 0){
        return temp;
    }
    temp=temp*10+n%10;
    return rev(n/10, temp);
}
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is : "<<rev(n,0);
    return 0;
}