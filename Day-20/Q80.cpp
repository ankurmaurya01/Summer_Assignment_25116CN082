#include <iostream>
using namespace std;
//program to Find column-wise sum
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
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=A[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is "<<sum<<endl;
    }
    return 0;
}