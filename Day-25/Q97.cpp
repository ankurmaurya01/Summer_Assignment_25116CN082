#include <iostream>
using namespace std;
//program to Merge two sorted arrays
int main(){
    int n1,n2;
    cout<<"Enter number of elements in array 1 and 2: ";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter elements of array 1: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 2: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
    }
    cout<<"Merged array : ";
    for(int i =0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}