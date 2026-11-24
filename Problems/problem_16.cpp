#include<iostream>
using namespace std;

void print_Result(){

    for(int i=65; i<=90; i++){

        for(int j=65; j<=90; j++){
            for(int k=65; k<=90; k++){
            cout<<char(i)<<char(j)<<char(k)<<endl;
        }
        }
        cout<<"____________________________________________________";
    }
    
}
            


int main(){
    print_Result();

    return 0;
}