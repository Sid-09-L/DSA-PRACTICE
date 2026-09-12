#include<iostream>
using namespace std;

template<class T>
class calculator{
    T a,b;

    public:
    void getdata(){
        cin>>a>>b;

    }
    void add(){
        cout<<a+b;

    }
};


// int main(){
//     calculator<int> c1;
//     c1.getdata();
//     c1.add();
    
//     calculator<float> c2;
//     c2.getdata();
//     c2.add();

//     return 0;
// }

// 

class error{
    public:
    void message(){
        cout<<"General error";

    }
};
class divide:public error{
    public:
    void display(){
        cout<<"Cannot divide by zero";

    }
};
int main(){
    int a=10;
    int b=5;

    try{
        if(b==0){
            throw divide();
        }
        cout<<a/b;
    }
    catch(divide e){
        e.display();
    }
    return 0;
}