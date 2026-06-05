#include <iostream>
using namespace std;
// Program to print prime numbers in a range
int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int num = start; num <= end; num++) {
        int isPrime = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
