#include <iostream>   
#include <string>     
#include <cstdlib>    
#include <ctime>      

using namespace std; 


enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
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
            // Generate a random lowercase letter (ASCII: 97 'a' to 122 'z').
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {

            // Generate a random uppercase letter (ASCII: 65 'A' to 90 'Z').
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter:
        {
        // Generate a random special character (ASCII: 33 '!' to 47 '/').

            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {
            // Generate a random digit (ASCII: 48 '0' to 57 '9').
            return char(RandomNumber(48, 57));
            break;
        }
    }
    
    return '\0';
}

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

// Function: GenerateWord
// Purpose: Generates a random word of a specified length using characters from a given type.
// Parameters:
//   - CharType: The type of character to use (e.g., CapitalLetter).
//   - Length: The number of characters in the word.
// Returns: A string containing the generated word.
string GenerateWord(enCharType CharType, short Length)
{
    string Word;  

    for (int i = 1; i <= Length; i++)
    { 
        // Append a random character of the specified type to the word.
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

// Purpose: Generates a key string composed of four groups of 4 uppercase letters separated by hyphens.
// Returns: A string representing the generated key.
string GenerateKey()
{
    string Key = "";  

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    // Loop from 1 to NumberOfKeys.
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        // Print the current key number and the generated key.
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));

    return 0;
}