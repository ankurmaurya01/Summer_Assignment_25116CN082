#include <iostream>
using namespace std;
// program to Count even and odd elements
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int eCount = 0;
    int oCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            eCount++;
        } else {
            oCount++;
        }
    }
    cout << "Number of even elements: " << eCount << endl;
    cout << "Number of odd elements: " << oCount << endl;
    return 0;
}