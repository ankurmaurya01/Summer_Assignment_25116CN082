#include <iostream>
using namespace std;
//program to Reverse a number
int main() {
    int num;
    cout << "Enter number to reverse";
    cin >> num;
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;        
        rev = rev * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}

