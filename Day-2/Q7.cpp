#include <iostream>
using namespace std;
//program to Find product of digits
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n == 0) {
        cout << "Product of digits is 0";
        return 0;
    }
    int product = 1;
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    cout << "Product of digits is " << product;
    return 0;
}
