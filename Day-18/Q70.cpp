#include <iostream>
#include <vector>
using namespace std;
//prpgram to selection sort
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++) {
        int min_idx=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[min_idx]) {
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    cout<<"Sorted array :  ";
    for(auto i=arr.begin();i != arr.end();i++){
        cout<<*i<<" ";
    }

    return 0;
}