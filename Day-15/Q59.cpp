#include <iostream>
using namespace std;
//program to Rotate array right
int main(){
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<< "Enter "<<n<< " elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[n-1];
    for (int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    cout<< "Array after right rotation: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}