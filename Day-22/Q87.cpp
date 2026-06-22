#include <iostream>
using namespace std;
//program to Character frequency
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        int found=0;
        for(int k=0;k<i;k++){
            if(str[k]==str[i]){
                found=1;
                break;
            }
        }
        if(found==0){
            for(int j=0;str[j]!='\0';j++){
                if(str[j]==str[i]){
                    count++;
                }
            }
            cout<<str[i]<<" : "<<count<<endl;
        }
    }
    return 0;
}