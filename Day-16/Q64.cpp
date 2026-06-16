#include <iostream>
using namespace std;
//program to Remove duplicates from array
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int temp[n];
    int k=0;
    for (int i = 0; i < n; i++) {
        int count=0;
        for (int j = 0; j < k; j++) {
            if (arr[i]==temp[j]) {
                count++;
                break;
            }
        }
        if (count==0) {
            temp[k] = arr[i];
            k++;
        }
    }
    cout<<"Array after removing duplicates: ";
    for(int i=0; i<k;i++) {
        cout<<temp[i]<< " ";
    }
    return 0;
}