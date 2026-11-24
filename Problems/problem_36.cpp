#include <iostream>   
using namespace std; 

int ReadNumber()
{
    int Number;  
    cout << "\nPlease enter a number? ";
    cin >> Number;  
    return Number;  
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    // Since it's a new element, increase the array length by 1.
    arrLength++;
    // Store the new element at the index corresponding to the updated length (using zero-based indexing).
    arr[arrLength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool AddMore = true; 

    do
    {
        AddArrayElement(ReadNumber(), arr, arrLength);

       
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;  // Read user's decision (true if 1, false if 0).

    } while (AddMore);  // Continue looping if the user inputs true.
}

void PrintArray(int arr[100], int arrLength)
{
  
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline at the end.
}


int main()
{
    int arr[100];     
    int arrLength = 0; 

    InputUserNumbersInArray(arr, arrLength);

  cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);

    return 0;  
}