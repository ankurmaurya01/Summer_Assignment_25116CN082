#include <iostream>
using namespace std;
//program to multiply matrices
int main(){
    int r,c;
    cout<<"Enter value of row and column: ";
    cin>>r>>c;
    int A[r][c],B[r][c],C[r][c];
    cout<<"Enter value of matrix A: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter value of matrix B: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            C[i][j]=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Multiplied Matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}