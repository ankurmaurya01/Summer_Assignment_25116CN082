#include<iostream>
using namespace std;
//program to Find first non-repeating character
int main(){
    string str;
    int i,j,count;
    cin>>str;
    for(i=0;i<str.length();i++){
        count=0;
        for(j=0;j<str.length();j++){
            if(str[i]==str[j])
                count++;
        }
        if(count==1){
            cout<<str[i];
            return 0;
        }
    }
    cout<<"No non-repeating character";
    return 0;
}