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

int Rev_Number(int num){
   
     int reminder,rev=0;
        while(num!=0){
        reminder=num%10;
        num=num/10;
        rev=rev*10+reminder;
        
        }
        return rev;   
}

void print_Digits(int rev){
    int reminder=0;
    cout<<"Your Digits in order are: "<<endl;
    while(rev!=0){
        reminder=rev%10;
        rev=rev/10;
        cout<<reminder<<endl;
    }

}


int main(){

    int num;
    print_Digits(Rev_Number(Read_Number("please enter A Number ")));
    return 0;
}