#include<iostream>
#include<cmath>
using namespace std;

enum enPrime{prime=1, NotPrime=2};

float ReadPositiveNumber(string message){
    int number=0;
    do{
        cout<<message<<endl;
        cin>>number;
    }
    while (number<=0);
    return number;
}


enPrime CheckPrime(int num){

    int M=round(num/2);  // round للتقريب
    for(int counter=2; counter<=M; counter++){
        if(num%counter==0)
            return enPrime::NotPrime;
    
    }
    return enPrime::prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";  // Print a newline for better formatting.
    // Display a header indicating the range being considered.
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;

    // Loop through all numbers from 1 to Number.
    for (int i = 1; i <= Number; i++)
    {
        // Use the CheckPrime function to determine if the current number i is prime.
        if (CheckPrime(i) == enPrime::prime)
        {
            // If i is prime, print it on a new line.
            cout << i << endl;
        }
    }
}



int main(){

    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("please enter a Number"));
}