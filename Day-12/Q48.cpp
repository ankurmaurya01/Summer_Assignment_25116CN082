#include <iostream>
using namespace std;

// Function to check perfect number
bool isPer(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPer(num))
        cout << num << " is a Perfect Number.";
    else
        cout << num << " is not a Perfect Number.";
    return 0;
}