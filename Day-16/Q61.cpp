#include <iostream>
using namespace std;
// program to Find missing number in array
int misnum(int arr[],int n){
    int esum=0;
    int rsum=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        esum+=arr[i];

    }
    return rsum-esum;
}
int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n-1];
    cout<<"Enter "<<n-1<<" elements :";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int missing=misnum(arr,n);
    if(missing==0){
        cout<<"No missing number";
    }
    else
        cout<<missing<<" is missing number";

    return 0;
}