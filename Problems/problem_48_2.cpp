#include <iostream> 
#include<cmath>  
using namespace std;  


int MyFloor(float Number)
{
    // If the number is positive or zero, return its integer part.
    if (Number > 0)
        return int(Number);
    else
        // If the number is negative and has a fractional part, subtract 1 to get the floor value.
        return int(Number) - 1;
}


float ReadNumber()
{
    float Number; 

    cout << "Please enter a float number? ";
    cin >> Number;  

    return Number; 
}


int main()
{
    float Number = ReadNumber(); 


    cout << "My MyFloor Result : " << MyFloor(Number) << endl;


    cout << "C++ floor Result  : " << floor(Number) << endl;

    return 0; 
}