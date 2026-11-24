#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int GenerateNumber(int from, int to){
    int x=rand()%(to-from+1)+from;
    return x;
}

void ReadArray(int arr[], int &length){
    cout<<"Enter the Size of Array:"<<endl;
    cin>>length;

    for(int i=0; i<length; i++){
        arr[i]=GenerateNumber(1,100);
    }
cout<<"\n"<<endl;
}

void PrintArray(int arr[], int length){
    cout<<"Array Elements: "<<" ";

    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

void PrimeArray(int arr[], int length) {
    cout << "Prime Numbers in Array:\n";
    
    for (int i = 0; i < length; i++) {
        if (arr[i] < 2) continue;

        int flag = 1;
        int M = arr[i] / 2;

        for (int counter = 2; counter <= M; counter++) {
            if (arr[i] % counter == 0) {
                flag = 0; 
                break;
            }
        }

        if (flag == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


int main(){
    srand(time(0));
    int arr[100], length;
    ReadArray(arr,length);
    PrintArray(arr,length);
    PrimeArray(arr,length);

    return 0;
}