#include <iostream>
using namespace std;
//program to Move zeroes to end
int main(){
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<< "Enter "<<n<< " elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int count=0;
    for (int i=0; i<n; i++) {
        if (arr[i]!= 0) {
            arr[count++]=arr[i];
        }
    }
    while(count < n){
        arr[count++] = 0;
    }
    cout<< "Array after moving zeros to the end: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<< " ";
    }
    return 0;
}