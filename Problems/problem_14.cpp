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

    for(int i=(num+65)-1; i>=65; i--){

        //soultion of Hadhood j<=num-((65+num-1)-i)

    
         for (int j = 1; j <=i-64 ; j++)
{
            cout<<char(i);
        }
         cout<<endl;
    }

}

int main(){

        Print_Result(read_num("enter a number"));

    return 0;
}