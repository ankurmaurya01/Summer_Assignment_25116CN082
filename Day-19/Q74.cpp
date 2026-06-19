#include <iostream>
using namespace std;
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
    cout<<"Subtracted Matrix : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            C[i][j]=A[i][j]-B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}