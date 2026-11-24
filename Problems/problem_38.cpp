#include <iostream>
#include<ctime>   
using namespace std; 

int ReadNumber()
{
    int Number;  
    cout << "\nPlease enter a number? ";
    cin >> Number;  
    return Number;  
}



int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}



void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


void AddArrayElementODD(int Number, int arr[100], int &arrLength)
{
    if(Number%2!=0){
           arrLength++;

    arr[arrLength - 1] = Number;
}
}



void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    
    for (int i = 0; i < arrLength; i++)
        AddArrayElementODD(arrSource[i], arrDestination, arrDestinationLength);
}



int main(){

    srand(time(0));
        int arr[100];       
    int arrLength = 0;      
    
 
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];     
    int arr2Length = 0;

    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements Odd Numbers:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}