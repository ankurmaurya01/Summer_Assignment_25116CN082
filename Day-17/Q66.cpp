#include <iostream>
using namespace std;
//program to Union of two arrays
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
    int result[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
        int count=0;
        for(int j=0;j<k;j++){
            if(arr1[i]==result[j]){
                count++;
                break;
            }
        }
        if(count==0){
            result[k]=arr1[i];
            k++;
        }
    }
    for(int i=0;i<n2;i++){
        int count=0;
        for(int j=0;j<k;j++){
            if(arr2[i]==result[j]){
                count++;
                break;
            }
        }
        if(count==0){
            result[k]=arr2[i];
            k++;
        }
    }
    cout<<"Union: ";
    for(int i=0;i<k;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}