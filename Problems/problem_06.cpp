#include<iostream>
using namespace std;

int Read_Number(string message){
    int num;
    do{
        cout<<message<<endl;
        cin>>num;
    }
    while(num<=0);

    return num;
}

void Print_Number(int num){

     int reminder,sum=0;
        while(num!=0){
        reminder=num%10;
        num=num/10;
        sum+=reminder;
        }
        cout<<"Sum of Your Digits is: "<<sum<<endl;
   
}


int main(){

    Print_Number(Read_Number("Please enter a Number"));
    return 0;
}