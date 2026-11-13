#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
   ifstream fin("student.txt");

   fin.seekg(2);

    char ch;
    fin.get(ch);

    cout<<ch;

    fin.close();

    return 0;
}