#include<iostream>
using namespace std;
// Program to find maximum occurring character
int main(){
    string str;
    int i,j,count,max=0;
    char ch;
    cin>>str;
    for(i=0;i<str.length();i++){
        count=0;
        for(j=0;j<str.length();j++){
            if(str[i]==str[j])
                count++;
        }
        if(count>max){
            max=count;
            ch=str[i];
        }
    }
    cout<<ch;
    return 0;
}