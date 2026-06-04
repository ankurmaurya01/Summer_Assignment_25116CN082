#include <iostream>
#include <cmath>
using namespace std;

// Program to print Armstrong numbers in a range
int main() {
    int start, end;
    cout << "Enter the range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int num = i;
        int power = 0;
        int temp = num;
        while (temp > 0) {
            temp /= 10;
            power++;
        }
        temp = num;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            sum += pow(digit, power);
        }
        if (sum == num) {
            cout << num << " is an Armstrong number." << endl;
        }
    }

    return 0;
}
