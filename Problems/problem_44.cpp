#include<iostream>
#include<ctime>
using namespace std;

int ReadNumber(){
    int num;
    cout<<"Please enter the Number of Elements of Array:\n";
    cin>>num;
    return num;
}

int RandomElements(int from , int to){
    int num=rand()%(to-from+1)+from;
    return num;
}

void fillArray(int arr[100], int &length){
    length=ReadNumber();
    for(int i=0; i<length; i++){
        arr[i]=RandomElements(-100,100);
    }
}

void PrintArray(int arr[100], int length){
    cout<<"Array:\n";
        for(int i=0; i<length; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n\n";
}

void CountODD(int arr[100], int length){
    int counter=0;

    for(int i=0; i<length; i++){
        if(arr[i]>0){
            counter++;
        }
    }
    cout<<"Positive Numbers count is: "<<counter<<endl;
}


int main(){

    srand(time(0));
    int arr[100], lenght;

    fillArray(arr,lenght);
    PrintArray(arr,lenght);
    CountODD(arr,lenght);
}