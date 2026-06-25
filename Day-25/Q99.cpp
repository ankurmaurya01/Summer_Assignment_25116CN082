#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//program to Sort names alphabetically.
using namespace std;
int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    string names[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name "<<i+1<<": ";
        cin>>names[i];
    }
    vector<string> v(names,names+n);
    sort(v.begin(),v.end());
    cout<<"Sorted names: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}