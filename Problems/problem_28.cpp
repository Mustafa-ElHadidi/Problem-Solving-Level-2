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
    cout<<"Array Elements:\n"<<" ";
    for(int i=0; i<length; i++){
     arr[i]= RandArray(1,100);
     cout<<arr[i]<<" ";  
}
cout<<endl;
}

string copyarray(int arr[], int length){
    cout<<"Array 2 After Copy is:\n"<<" ";
        for(int i=0; i<length; i++){
     cout<<arr[i]<<" ";  
}

}

int main(){

    srand((unsigned) time(NULL));
    int arr[100];
    int x=readnum("Enter the size of your Array");
    PrintArray(arr,x);
    copyarray(arr,x);

    return 0;
}