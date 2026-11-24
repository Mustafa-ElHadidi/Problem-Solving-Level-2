#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[100], int &arrlength){
    arrlength=10;
    arr[0]=10;
    arr[1]=10;
    arr[2]=10;
    arr[3]=50;
    arr[4]=50;
    arr[5]=70;
    arr[6]=70;
    arr[7]=70;
    arr[7]=70;
    arr[8]=70;
    arr[9]=90;

}

void PrintArray(int arr[100], int arrlength){
    for(int i=0; i<arrlength; i++){
        cout<<arr[i]<<" ";
    }
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;             // Increase the array length by 1.
    arr[arrLength - 1] = Number;  // Place the new element at the new last index.
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  // Return the index as soon as the number is found.
    }
    // If the number is not found, return -1.
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}


void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
    // Loop through each element in the source array.
    for (int i = 0; i < SourceLength; i++)
    {
        // If the current element is not already in the destination array...
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            // ...then add it to the destination array.
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}



int main(){
    int arr[100], length=0;
    int arr2[100],length2=0;

    FillArray(arr,length);
    cout<<"Array 1 Elements: \n";
    PrintArray(arr,length);

    cout<<"\n\nArray 2 Distinct Elements:\n";

    CopyDistinctNumbersToArray(arr,arr2,length,length2);
    PrintArray(arr2,length2);


    return 0;
}