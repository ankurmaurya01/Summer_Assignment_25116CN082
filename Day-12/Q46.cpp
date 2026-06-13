#include <iostream>
#include <cmath>
using namespace std;
//program to Write function for Armstrong
bool arm(int n){
    int num = n, sum = 0, power = 0;
    if (n == 0) power = 1;
    while (n > 0){
        n = n / 10;
        power++;
    }
    n = num;
    while (n > 0){
        int temp = n % 10;
        n = n / 10;
        sum += round(pow(temp, power));
    }
    return num == sum;
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    if(arm(n)){
        cout<<n<<" is armstrong number";
    }
    else{
        cout<<n<<" is not armstrong number";
    }
    return 0;
}