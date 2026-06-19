#include <iostream>
using namespace std;
//program to sum of diagonal of a matrix
int main() {
    int r,c;
    cout<<"Enter value of row and column: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter value of matrix A:"<<endl;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>A[i][j];
        }
    }
    int sum=0,sum1=0;
    for(int i=0;i<r;i++) {
        sum+=A[i][i];
        sum1+=A[i][r-1-i];
    }
    cout<<"Sum of principal diagonal: "<<sum<<endl;
    cout<<"Sum of anti diagonal: "<<sum1<<endl;
    return 0;
}