#include <iostream>  
using namespace std;  
#include<cmath>

float ReadNumber()
{
    float Number;  

    cout << "Please enter a float number? ";
    cin >> Number; 

    return Number;  
}



float GetFractionPart(float Number)
{
    return Number - int(Number);
}



int MyRound(float Number)
{
    int IntPart;  // Variable to store the integer part of the number.
    IntPart = int(Number);  // Extract the integer part.

    // Compute the fractional part using the GetFractionPart function.
    float FractionsPart = GetFractionPart(Number);

    // If the absolute value of the fractional part is 0.5 or more, round the number accordingly.
    if (abs(FractionsPart) >= 0.5)
    {
        // If the number is positive, round up.
        if (Number > 0)
            return ++IntPart;  
        // If the number is negative, round down.
        else
            return --IntPart;
    }
    else
    {
        // If the fractional part is less than 0.5, keep the integer part as is.
        return IntPart;
    }
}


int main()
{
    float Number = ReadNumber();  

    cout << "My Round Result : " << MyRound(Number) << endl;

    cout << "C++ Round Result: " << round(Number) << endl;

    return 0;  
}