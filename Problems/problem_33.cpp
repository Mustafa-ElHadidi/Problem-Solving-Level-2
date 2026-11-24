#include <iostream>
#include<ctime>
using namespace std;  

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message << endl; 
        cin >> Number;          
    } while (Number <= 0);      
    return Number;
}



enum enCharType { 
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4          
};


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}



char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SamallLetter:
        {
            // Generate a random lowercase letter (ASCII codes 97 to 122).
            return char(RandomNumber(97, 122));
            break; // break is not needed after return.
        }
        case enCharType::CapitalLetter:
        {
            // Generate a random uppercase letter (ASCII codes 65 to 90).
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter:
        {
            // Generate a random special character (ASCII codes 33 to 47).
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {
            // Generate a random digit (ASCII codes 48 to 57).
            return char(RandomNumber(48, 57));
            break;
        }
    }
    return '\0';
}


string GenerateWord(enCharType CharType, short Length)
{
    string Word;  
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}


string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}




void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i+1 << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}


int main() {
    srand((unsigned)time(NULL));
    
    string arr[100]; // Declare a string array to hold up to 100 keys.
    int arrLength = 0; // Variable to hold the number of keys to generate.
    
    arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");
    
    FillArrayWithKeys(arr, arrLength);
    

    PrintStringArray(arr, arrLength);
    
    return 0; // End the program successfully.
}