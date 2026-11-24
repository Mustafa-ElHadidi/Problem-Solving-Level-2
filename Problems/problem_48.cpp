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



int MyFloor(float Number)
{
    int IntPart; 
    IntPart = int(Number);  


    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= 0.5 || abs(FractionsPart)<=0.5)
    {
       
        if (Number > 0)
            return IntPart;  
        else
            return --IntPart;
    }
    
  
}


int main()
{
    float Number = ReadNumber();  

    cout << "My Floor Result : " << MyFloor(Number) << endl;

    cout << "C++ Floor Result: " << floor(Number) << endl;

    return 0;  
}