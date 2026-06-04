#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    int n1 = n;
    int power = 0;

    int temp = n1;
    while (temp > 0) {
        temp = temp / 10;
        power++;
    }

    temp = n1;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        temp = temp / 10;
        sum += pow(digit, power);
    }

    cout << "Sum = " << sum << endl;

    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
