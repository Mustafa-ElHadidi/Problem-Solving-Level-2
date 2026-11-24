#include<iostream>
using namespace std;

int Read_Num(string message){
    int num;
    do{
        cout<<message;
        cin>>num;
    }while (num<=0);
    
    return num;
}

int CountDigitFrequency(short DigitToCheck ,short DigitToCheck_2 , short DigitToCheck_3, int Number)
{
    int FreqCount = 0;
        int FreqCount_2 = 0;
    int FreqCount_3 = 0;


    int Remainder = 0;   
    
    while (Number > 0)
    {
        Remainder = Number % 10;  
        Number = Number / 10;     
        
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
        else if(DigitToCheck_2 == Remainder){

             FreqCount_2 ++;
        }
        else{
            FreqCount_3 ++;

        }
    }
    
    cout<<"Digit:"<<DigitToCheck<<" is"<<" "<<FreqCount<<" "<<" (times)"<<endl;

        cout<<"Digit:"<<DigitToCheck_2<<" is"<<" "<<FreqCount_2<<" "<<" (times)"<<endl;

            cout<<"Digit:"<<DigitToCheck_3<<" is"<<" "<<FreqCount_3<<" "<<" (times)"<<endl;

}
int main(){
    int num=Read_Num("please enter a number ");
    int x=Read_Num("Please enter one digit to check? ");
    int y=Read_Num("Please enter one digit to check? ");
    int z=Read_Num("Please enter one digit to check? ");
    CountDigitFrequency(x,y,z,num);


return 0;
}