#include <iostream>
using namespace std;
//program to Find second largest element
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = arr[0];
    int secLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > l) {
            secLargest = l;
            l = arr[i];
        } else if (arr[i] > secLargest && arr[i] != l) {
            secLargest = arr[i];
        }
    }
    cout << "Second largest element is: " << secLargest << endl;
    return 0;
}