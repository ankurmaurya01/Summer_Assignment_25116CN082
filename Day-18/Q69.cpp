#include <iostream>
#include <vector>
using namespace std;
//program to Bubble sort
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array : ";
    for(auto i=arr.begin();i != arr.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}