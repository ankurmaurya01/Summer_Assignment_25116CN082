#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//program to Sort words by length
int main(){
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cout<<"Enter word "<<i+1<<": ";
        cin>>words[i];
    }
    vector<string> v(words,words+n);
    sort(v.begin(),v.end(),[](string a,string b){
        return a.length()<b.length()||(a.length()==b.length()&&a<b);
    });
    cout<<"Sorted words by length: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}