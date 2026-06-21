#include <iostream>
using namespace std;
//program to Count vowels and consonants
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int vowels=0,consonants=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else if(ch>='a'&&ch<='z'){
            consonants++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants;
    return 0;
}