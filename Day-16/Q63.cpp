#include <iostream>
using namespace std;
//program to Find pair with given sum
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int key=0;
    cout<<"Enter value of sum";
    cin>>key;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<"Pair of number are "<<arr[i]<<" "<<arr[j]<<endl;   
            }
        }
    }
    return 0;
}