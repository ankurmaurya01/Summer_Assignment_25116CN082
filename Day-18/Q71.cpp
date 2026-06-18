#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//program to binary search
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" sorted elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to search: ";
    cin>>target;
    bool result=binary_search(arr.begin(),arr.end(),target);
    if(result==true){
        cout << "Element is present at index of " << (find(arr.begin(),arr.end(),target) - arr.begin());
    }
    else{
        cout<<"Element is not present";
    }

    return 0;
}