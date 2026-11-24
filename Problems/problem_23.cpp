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

void PrintArray(int arr[], int length){
    cout<<"Array Elements:"<<" ";
    for(int i=0; i<length; i++){
     cout<< RandArray(1,100)<<" ";
   
}}


int main(){

    srand(time(0));
    int arr[100];
    PrintArray(arr,readnum("Please enter the size of Array"));

    return 0;
}