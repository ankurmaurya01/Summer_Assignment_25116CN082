#include <iostream>
using namespace std;
// program to check palindrome using function
bool pal(int n){
    int org = n;
    int rev = 0;
    while (n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return org == rev;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n < 0){
        cout<<"Negative numbers are not palindromes";
        return 0;
    }
    if(pal(n))
        cout<<n<<" is a palindrome";
    else
        cout<<n<<" is not a palindrome";
    return 0;
}