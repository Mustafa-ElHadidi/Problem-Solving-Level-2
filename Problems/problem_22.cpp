#include<iostream>
using namespace std;

void read_arr(int arr[], int &length){
    cout<<"How many numbers U want to enter "<<endl;
    cin>>length;
    for (int i=0; i<length;i++){
        cout<<"please enter number "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;
}

void print_arr(int arr[], int length){
    cout<<"Original Array:"<<" ";
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}

void print_Repeated(int arr[], int length){
    int numbercheck;
    cout<<"enter the number You Want to check"<<endl;
    cin>>numbercheck;
    int counter=0;
    cout<<"\n";

    for(int i=0; i<length; i++){
        if(arr[i]==numbercheck)
        counter++;
    }
             cout<<numbercheck<<" is repeated "<<counter<<" time(s)"<<endl;

}


int main(){
int arr[0],length;
read_arr(arr,length);
 print_arr(arr, length);
 print_Repeated(arr,length);

    return 0;
}