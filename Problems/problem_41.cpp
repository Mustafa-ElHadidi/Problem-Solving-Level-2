#include<iostream>
#include<string>
using namespace std;

int FillArray(int arr[100], int &length){
    cout<<"please Enter the Number of Elements You Want to add:\n";
    cin>>length;
    for(int i=0; i<length; i++){
        cout<<"arr["<<i+1<<"]"<<" ";
        cin>>arr[i];
    }
}

void printArray(int arr[100], int length){
    cout<<"Array:\n";
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
}

bool IsPalindromeArray(int arr[100], int length){
    for(int i=0; i<length; i++){

        if(arr[length-1-i]!=arr[i]){
        return false;
        length--;
    }

    }
            return true;

}


int main(){

    int arr[100],length;

    FillArray(arr,length);
    printArray(arr,length);

    if(IsPalindromeArray(arr,length)){
    cout<<"Yes, Palindrome Array"<<endl;
    }

    else
    cout<<"NOT a Palindrome Array"<<endl;

    return  0;

}