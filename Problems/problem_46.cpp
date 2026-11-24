#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber(){
    int num;
    cout<<"Please Enter a negative Number:\n";
    cin>>num;
  return num;
}

int MyABS(int num){
      if(num<0)
    return -1*num;
    else
    return num;
}


int main(){

    int num=ReadNumber();
   cout<<"My ABS Result is: "<< MyABS(num)<<endl;

    cout<<"C++ ABS Result is: "<<abs(num);

  

    return 0;
}