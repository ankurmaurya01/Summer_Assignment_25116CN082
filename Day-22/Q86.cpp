#include <iostream>
using namespace std;
//program to Count words in a sentence
int main(){
    string str;
    cout<<"Enter a sentence: ";
    getline(cin,str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    count++;
    cout<<"Number of words: "<<count;
    return 0;
}