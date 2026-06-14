#include <iostream>
using namespace std;
//program to find frequency of an element.
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to find frequency: ";
    cin >> key;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    cout << "Frequency of " << key << " is " << count << endl;
    return 0;
}