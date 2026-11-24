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
    cout<<"Your Digits in a reversed order: "<<endl;
     int reminder=0;
        while(num!=0){
        reminder=num%10;
        num=num/10;
        
         cout<<reminder<<endl;
        }


        
}


int main(){

    Print_Number(Read_Number("Please enter a Number"));
    return 0;
}