#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
int guess,random;
int no_ofguess=0;
srand(time(NULL));//seed random on basis of current time.

cout<<"Welcome to the world of guessing number!"<<"\n";
random= rand()%100+1;//generating 1 to 100.
do{
    cout<<"Please enter the number between (1 to 100):";
    cin>>guess;
    no_ofguess++;
    if(guess<random){
        cout<<"Guess a larger number:"<<"\n";
    }
    else if(guess>random){
        cout<<"Guess a smaller number:"<<"\n";
    }
    else{
        cout<<"Congratulation!! you guess right number in "<<no_ofguess<<" attempts.";
    }
}while(guess!=random);

cout<<"\n"<<"Thanks For Playing";
cout<<"\n"<<"Developed by Nandani";

    return 0;
}