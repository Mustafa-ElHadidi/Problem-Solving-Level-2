#include<iostream>
using namespace std;

int read_num(string message){
    int num=0;
    do{
        cout<<message<<endl;
        cin>>num;
    }while (num<=0);
    return num;
}

int  check_palindrome(int num){
    int original=num;
    int reminder=0;
    int rev=0;
    while(num!=0){
        reminder=num%10;
        rev=rev*10+reminder;
        num/=10;
    }

    cout<<((rev==original)?"palindrome Number" : "Not Palindrome");
}

int main(){
int num=read_num("please enter a number ");
check_palindrome(num);
    return 0;
}