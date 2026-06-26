#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
// program to Create number guessing game
int main(){
    int num,guess;
    srand(time(0));
    num=rand()%10+1;
    
    cout<<"Number Guessing Game"<<endl;
    cout<<"Guess a number between 1 and 10: ";
    cin>>guess;
    
    if(guess==num)
        cout<<"Correct! You guessed the number."<<endl;
    else{
        cout<<"Wrong guess!"<<endl;
        cout<<"The correct number was "<<num<<endl;
    }
    return 0;
}