#include <iostream>
using namespace std;

// Program to Generate Fibonacci series
int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    cout << "Given Fibonacci series is: ";

    int first = 0, second = 1;

    for (int i = 0; i < n; i++) {
        cout << first << " ";
        int sum = first + second;
        first = second;
        second = sum;
    }

    return 0;
}
