#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

double division(double a,double b){
    if(b==0){
    cout<<"Invlaid Arguement for Division"<<"\n";
    //throw std::runtime_error("Division by zero!");
     return NAN;
     //std::numeric_limits<double>::quiet_NaN();
    }
    else {
        return a/b;
    }
    //same with modulus!
}
int main(){
    int choice;
    double first,second,result;
    while(1){
    cout<<"WELCOME TO SIMPLE CALCULATOR!"<<"\n";
    cout<<"Choose from the following operation:-"<<"\n";
    cout<<"1.Addition"<<"\n";
    cout<<"2.Subtraction"<<"\n";
    cout<<"3.Multiplication"<<"\n";
    cout<<"4.Division"<<"\n";
    cout<<"5.Power"<<"\n";
    cout<<"6.Modulus"<<"\n";
    cout<<"7.Exit"<<"\n";
    cout<<"Enter your choice:";
    cin>>choice;
    if(choice==7){
        break;
    }
    if(choice <1 || choice >7){
        cout<<"Invalid command";
        continue;
    }
    cout<<"Enter first number:";
    cin>>first;
    cout<<"Enter second number:";
    cin>>second;
    
    switch(choice){
        case 1:
        result=first+second;
        break;
        case 2:
        result=first-second;
        break;
        case 3:
        result=first*second;
        break;
        case 4:
        result=division(first,second);
        break;
        case 5:
        result=pow(first,second);
        break;
        case 6:
        result=int(first) % int(second);
        break;
        default:
        break;
    }
    if(result != NAN){
    cout<<"Answer to this operation is:"<<result<<"\n"<<"\n";
}
}
    return 0;
}