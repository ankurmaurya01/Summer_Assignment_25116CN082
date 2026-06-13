#include <iostream>
using namespace std;
//program to Find largest and smallest element
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
    int s = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > l) {
            l = arr[i];
        }
        if (arr[i] < s) {
            s = arr[i];
        }
    }
    cout << "Largest element: " << l << endl;
    cout << "Smallest element: " << s << endl;
    return 0;
}