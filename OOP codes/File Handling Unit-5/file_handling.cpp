#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st1="Show me";
    string st2;

    ofstream write("LOL.txt");
    write<<st1;

    ifstream read("LOL.txt");
    getline(read,st2);

    cout<<st2;
}