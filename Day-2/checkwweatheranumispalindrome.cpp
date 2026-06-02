#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter a number: ";
    if (!(cin >> number)) {
        cerr << "Invalid input\n";
        return 1;
    }

    long long original = number;
    long long reversed = 0;
    long long temp = (number < 0) ? -number : number;

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (number < 0) {
        reversed = -reversed;
    }

    if (original == reversed) {
        cout << original << " is a palindrome number.\n";
    } else {
        cout << original << " is not a palindrome number.\n";
    }

    return 0;
}



