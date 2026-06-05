#include <iostream>
using namespace std;
// Program to check if a number is prime
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int isPrime = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }

    return 0;
}
