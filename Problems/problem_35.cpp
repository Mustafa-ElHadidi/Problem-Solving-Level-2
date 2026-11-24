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

int FillArray(int arr[], int num){
    
    for(int i=0; i<num; i++){
        arr[i]=Fill_Ramdom(1,100);
    }
}


void Print_Array(int num, int arr[]){

    cout<<"Array Elements: "<<endl;

    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

}

int check_position(int num,int arr[]){
    cout<<"please Enter the Number You want to find:"<<endl;
    
    int check=0;
    cin>>check;
    int flag=0;


    for(int i=0; i<num; i++){
                
        if (arr[i]==check){
            cout<<"Yes , This Number is found ";
            flag=1;
  break;     
        }  

    }
    if(!flag){
                        cout<<"No , This Number isNot found ";

        }

}

int main(){
    srand(time(0));
    int num=Read_Num("Please enter the Size of Array:");
    int arr[100];
    FillArray(arr,num);
    Print_Array(num,arr);
    check_position(num,arr);


}