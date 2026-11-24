#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int readnum(string message){
    cout<<message<<endl;
    int num;
    cin>>num;
    return num;
}

int RandArray(int from, int to){
    int element=rand()%(to-from+1)+from;
    return element;
}

void PrintArray(int arr[], int &length){
    cout<<"Array Elements:"<<endl;
    for(int i=0; i<length; i++){
     arr[i]= RandArray(1,100);
     cout<<arr[i]<<" ";  
}
cout<<endl<<endl;
}

void printArray2(int arr2[], int length){

    cout<<"Array 2 Elements:"<<endl;
    for(int i=0; i<length; i++){
     arr2[i]= RandArray(1,100);
     cout<<arr2[i]<<" ";  
}
cout<<endl<<endl;
}

void printsum(int arr[], int arr2[], int length){
    cout<<"Sum of 2 arrays Elements: "<<endl;
    for(int i =0; i<length; i++){

        cout<<arr[i]+arr2[i]<<" ";
    }
}

int main(){
    int length;
    int arr[100],arr2[100];
    int x=readnum("Please Enter the size of 2 Arrays: ");
    PrintArray(arr,x);
    printArray2(arr2,x);
    printsum(arr,arr2,x);
    return 0;

}
