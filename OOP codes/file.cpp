#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;

    file.open("data.txt",ios::out);
    file<<"Hello World";
    file.close();

    file.open("data.txt",ios::in);

    char ch[6]={};

    file.seekg(6);
    file.read(ch,5);

    cout<<"Data after seekg:"<<ch<<endl;
    file.close();

    file.open("data.txt",ios::in|ios::out);

    file.seekp(6);
    file<<"C++!!";

    file.seekg(0);
    char c;

    cout<<"updated file content:"<<endl;

    while(file.get(c)){
        cout<<c;
    }

    file.close();

    return 0;
}