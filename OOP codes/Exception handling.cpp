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
int main(){
    calculator<int> c1;
    c1.getdata();
    c1.add();
    
    calculator<float> c2;
    c2.getdata();
    c2.add();

    return 0;
}