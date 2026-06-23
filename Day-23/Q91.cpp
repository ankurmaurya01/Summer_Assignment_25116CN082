#include<iostream>
using namespace std;
// Program to check anagram strings
int main(){
    string str1,str2;
    int i,j,count1,count2;
    cin>>str1>>str2;
    if(str1.length()!=str2.length()){
        cout<<"Not Anagram";
        return 0;
    }
    for(i=0;i<str1.length();i++){
        count1=0;
        count2=0;
        for(j=0;j<str1.length();j++){
            if(str1[i]==str1[j])
                count1++;
            if(str1[i]==str2[j])
                count2++;
        }
        if(count1!=count2){
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}