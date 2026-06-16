#include <iostream>
using namespace std;
//program to Find maximum frequency element
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<< " elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int maxFreq=0;
    int element=arr[0];

    for(int i=0;i<n;i++) {
        int count=0;
        for (int j=0;j<n;j++) {
            if (arr[j]==arr[i]) {
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            element=arr[i];
        }
    }

    cout<<"Element with maximum frequency is: "<<element<<" and it appears "<<maxFreq<<" times" << endl;
    return 0;
}
