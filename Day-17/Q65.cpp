#include <iostream>
using namespace std;
//program to Merge two arrays
int main(){
    int n1,n2;
    cout<<"Enter size of array 1: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter "<<n1<<" elements: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of array 2: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter "<<n2<<" elements: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int merged[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
        merged[k]=arr1[i];
        k++;
    }
    for(int i=0;i<n2;i++){
        merged[k]=arr2[i];
        k++;
    }
    cout<<"Merged array: ";
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<" ";
    } 
    return 0;
}
