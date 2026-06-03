#include <iostream>
using namespace std;
//program to Print prime numbers in a range
int main() {
    int s, e;
    cout << "Enter the starting number: ";
    cin >> s;
    cout << "Enter the ending number: ";
    cin >> e;

    cout << "Prime numbers between " << s<< " and " << e << " are: ";

    for (int n = s; n <= e; n++) {
        if (n <= 1) continue; =
        bool isPrime = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    cout << endl;
    return 0;
}
