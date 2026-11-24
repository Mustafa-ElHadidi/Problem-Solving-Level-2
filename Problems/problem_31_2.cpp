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

void Swap(int& A, int& B)
{
    int Temp;    // Temporary variable to hold the value of A.
    Temp = A;    // Save the value of A in Temp.
    A = B;       // Copy the value of B into A.
    B = Temp;    // Copy the value of Temp (original A) into B.
}

void FillArrayWith1toN(int arr[100], int arrLength)
{
    // Loop through each index and assign the value (index + 1) to that element.
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

int RandomNumber(int From, int To)
{
    // Use the modulus operator to get a random number within the range,
    // then shift it by adding From.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void ShuffleArray(int arr[100], int arrLength)
{
    // Loop through each element of the array.
    // For each iteration, swap two randomly chosen elements.
    for (int i = 0; i < arrLength; i++)
    {
        // RandomNumber(1, arrLength) generates a random number between 1 and arrLength.
        // Subtract 1 to convert it to a valid 0-based index.
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;
        // Swap the elements at the two randomly chosen indices.
        Swap(arr[index1], arr[index2]);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];  
    int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");

    FillArrayWith1toN(arr, arrLength);

    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, arrLength);
    
    
    ShuffleArray(arr, arrLength);

    
    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, arrLength);

    return 0;  //
}