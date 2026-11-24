#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber()
{
    float Number; 

    cout << "Please enter a float number? ";
    cin >> Number;  

    return Number; 
}

int MyCeil(float Number)
{
    // If the number is positive or zero, return its integer part.
    if (Number > 0)
        return int(++Number);
    else
        // If the number is negative and has a fractional part, subtract 1 to get the floor value.
        return int(Number);
}


int main(){

 float Number = ReadNumber(); 


    cout << "My MyCeil Result : " << MyCeil(Number) << endl;


    cout << "C++ Myceil Result  : " << ceil(Number) << endl;

}