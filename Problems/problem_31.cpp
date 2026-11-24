#include<iostream>
#include<ctime>
using namespace std;

int Fill_Ramdom(int from,int to){

    int random=rand()%(to-from+1)+from;
    return random;
}

int Read_Num(string message){
    cout<<message<<endl;
    int num;
    cin>>num;
    return num;
    cout<<endl<<endl;
}

void Fill_Array_Ordered(int num, int arr[]){
    
    for(int i=0; i<num; i++){
        arr[i]=i+1;
    }

}

void Print_Array(int num, int arr[]){

    cout<<"Array Elements Before Shuffle: "<<endl;

    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

void fill_Array_Shuffle(int num, int arr[]){
    for(int i=0; i<num; i++){
        int randomindex=Fill_Ramdom(0,num-1);
        int temp=arr[i];
        arr[i]=arr[randomindex];
        arr[randomindex]=temp;
    }
}

void print_Array_Shuffle(int num, int arr[]){
        cout<<"Array Elements After Shuffle: "<<endl;


    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";

    }
}

int main(){
    srand(time(0));

    int arr[100], num;
    num=Read_Num("Please enter the Number you want to print it from 1 to N");
    Fill_Array_Ordered(num,arr);
    Print_Array(num,arr);
    fill_Array_Shuffle(num,arr);
    print_Array_Shuffle(num,arr);
}

