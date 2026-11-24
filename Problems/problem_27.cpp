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
    cout<<"Array Elements:"<<" ";
    for(int i=0; i<length; i++){
     arr[i]= RandArray(1,100);
     cout<<arr[i]<<" ";  
}
}

string printAve(int arr[], int length){

    cout<<endl;
    int ave=0;
    for(int i=0; i<length; i++){
        ave+=arr[i];
    }
    float average=float(ave)/length;
    cout<<"Average of Elements is: "<<average;
}

int main(){

    srand(time(0));
    int arr[100];
    int x=readnum("Enter the size of your Array");
    PrintArray(arr,x);
    printAve(arr,x);
    return 0;
}