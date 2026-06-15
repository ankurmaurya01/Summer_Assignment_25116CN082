#include <iostream>
using namespace std;
//program to Rotate array left
int main(){
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<< " elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<< "Array after left rotation: ";
    for(int i=0; i<n;i++) {
        cout<<arr[i]<< " ";
    }
    return 0;
}