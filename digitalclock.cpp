#include<iostream>
#include<ctime>
using namespace std;

int main(){

    time_t raw_time;
    int format;
    struct tm *current_time;//pointer
    char buffer[50];
    cout<<"Choose the time format:"<<"\n";
    cout<<"1.24hrs format";
    cout<<"\n"<<"2.12hrs format";
    cout<<"\n"<<"Your format:";
    cin>>format;

    time(&raw_time);//calling time function.fills current time
    current_time=localtime(&raw_time);//localtime loction wise
    if(format==2){
    strftime(buffer,sizeof(buffer),"%I:%M:%S %p",current_time);
    cout<<"current time:"<<buffer;
    }

    else{
    strftime(buffer,sizeof(buffer),"%H:%M:%S",current_time);
    cout<<"current time:"<<buffer;
    }
    
    return 0;
}