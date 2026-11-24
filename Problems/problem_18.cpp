#include <iostream>
#include <string>
using namespace std;
string read_name(){
    cout<<"Please enter your name:"<<endl;
    string name;
    getline(cin,name);
    cout<<"Name Before Encryption:"<<name<<endl;
    return name;
}

string Encrypting(string name,short encrypt){

    for(int i=0; i<name.length(); i++){
        name[i]=char(int(name[i]+encrypt));
    }
    cout<<"Name After Encrypting is:"<<name;
    cout<<"\n";

    return name;
}

string Decrypting(string name,short encrypt){

      for(int i=0; i<name.length(); i++){
        name[i]=char(int(name[i]-encrypt));
    }
    cout<<"Name After Decrypting is:"<<name;
    return name;

}

int main(){
    int encrypt=2;
    string text="";
    text=read_name();
    string chiperText=Encrypting(text,encrypt);
    Decrypting(chiperText,encrypt);

    return 0;

}