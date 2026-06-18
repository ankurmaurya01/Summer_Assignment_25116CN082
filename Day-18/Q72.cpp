#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// program to Sort array in descending order
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<"Array in decreasing order :";
    for(auto i=arr.begin();i !=arr.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}