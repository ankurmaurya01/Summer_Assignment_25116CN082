#include <iostream>
using namespace std;
// Program to check whether a number is a palindrome

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int org = num;
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (org == rev) {
        cout << org << " is a palindrome number." << endl;
    } else {
        cout << org << " is not a palindrome number." << endl;
    }

    return 0;
}



