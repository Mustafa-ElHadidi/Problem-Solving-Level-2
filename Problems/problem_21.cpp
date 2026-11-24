#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int readNumber(string message){
    cout<<message<<endl;
    int num;
    cin>>num;
    return num;
}

string printRandom(int num, int from, int to){
    string key;
    for(int i=0; i<num; i++){
        key="";

    for(int j=1; j<=16; j++){
        key+=char(rand()%(to-from+1)+from);
          if(j%4==0&&j<16){
        key+='_';
    }
    }
  
    cout<<"key"<<"["<<i+1<<"]:"<<key;
    cout<<endl;
    key=""; 
}
}
int main(){
    int x=readNumber("enter a numbe of keys: ");
    printRandom(x,65,90);


}