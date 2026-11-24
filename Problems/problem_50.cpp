#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
    int Number; 

    cout << "Please enter a number? ";
    cin >> Number;  

    return Number; 
}


void Mysqrt(int num){

    cout<<"My MySqrt Result is: "<<pow(num, 0.5);
    cout<<endl;
}

int main(){
    int x=ReadNumber();
    Mysqrt(x);
    cout<<"c++ Sqrt Result: "<<sqrt(x);
}