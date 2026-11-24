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
    cout<<"please Enter the Element You want to find:"<<endl;
    
    int check=0;
    cin>>check;
        cout<<"Number you are looking for is:"<<check<<endl;


    for(int i=0; i<num; i++){
                        int index=0;

        if (arr[i]==check){

            index=i;
              cout<<"The Number Found at position:"<<index<<endl;
  cout<<"The Number Found its Order: "<<index+1<<endl; 
  break;     
        }
    }

}

int main(){
        srand((unsigned)time(NULL));

    int arr[100];
    int x=Read_Num("Please enter the size of Array");
    FillArray(arr,x);
    Print_Array(x,arr);
    check_position(x,arr);
    return 0;

}