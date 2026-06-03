#include <iostream>
using namespace std;
//program to Find LCM of two numbers
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int lcm;
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}
