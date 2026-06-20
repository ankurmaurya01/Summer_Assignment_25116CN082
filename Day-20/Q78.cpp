#include <iostream>
using namespace std;
//program to Check symmetric matrix
int main(){
    int r,c;
    cout<<"Enter value of row and column: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter value of matrix A: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    if(r!=c){
        cout<<"Not symmetric matrix";
        return 0;
    }
    bool sym=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]!=A[j][i]){
                sym=false;
                break;
            }
        }
    }
    if(sym){
        cout<<"It is symmetric matrix";
    }
    else{
        cout<<"Not symmetric matrix";
    }
    return 0;
}