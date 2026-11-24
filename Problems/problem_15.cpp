#include<iostream>
using namespace std;

int read_number(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}

void print_Result(int num){
    for(int i=65; i<=65+num-1; i++){

        for(int j=1; j<=i-64; j++){
            cout<<char(i);
        }
        cout<<"\n";
    }
}
int main(){
    print_Result(read_number("please enter a positive number"));

    return 0;
}