#include<iostream>
#include<string>

using namespace std;

string read_password(string message){
    cout<<message<<endl;
    string password;
    cin>>password;
    return password;
}

bool Result(string password){
    
    string word=" ";
    int counter=0;

     for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                ++counter;
                word.append(1, char(i));
                word.append(1, char(j));
                word.append(1, char(k));
                cout<<"Trail:"<<counter<<" "<<word<<endl;

                      if(password==word){
                        cout<<"\n";
                    cout<<"password is:"<<password<<endl;
                    cout<<"Found After: "<<counter<<" "<<"Trail"<<endl;
                    return true;
                }
                word = "";
        }
            }
        
    }
                return false;
        

}

int main(){
    Result(read_password("please enter your Password 3 Letters Capital"));
    return 0;
}


