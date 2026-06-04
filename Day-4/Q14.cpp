#include <iostream>
using namespace std;
//program to Find nth Fibonacci term
int main() {
    int n;
    cout << "Enter value to find nth fibonacci term: ";
    cin >> n;

    int first = 0, second = 1, sum;

    if (n == 0) {
        cout << "nth fibonacci term is: " << first;
    } else if (n == 1) {
        cout << "nth fibonacci term is: " << second;
    } else {
        for (int i = 2; i <= n; i++) {
            sum = first + second;
            first = second;
            second = sum;
        }
        cout << "nth fibonacci term is: " << second;
    }

    return 0;
}