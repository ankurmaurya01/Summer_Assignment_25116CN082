#include <iostream>
using namespace std;
//program to transpose matrix
int main(){
    int r,c;
    cout<<"Enter value of row and column: ";
    cin>>r>>c;
    int A[r][c],B[c][r]; 
    cout<<"Enter value of matrix A: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            B[j][i]=A[i][j];
        }
    }
    cout<<"Transposed Matrix: "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}