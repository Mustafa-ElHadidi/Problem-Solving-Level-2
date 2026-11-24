#include<iostream>
using namespace std;

int read_num(string message){
    int num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}

void Print_Result(int num){

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
         cout<<endl;
    }

}


int main(){
    Print_Result(read_num("enter a number"));




    return 0;
}

    
