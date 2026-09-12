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

class ageexception{
    public:
    void message(){
        cout<<"Age is less than 18";
    }
};

int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;

    try {
        if(age<18){
            throw ageexception();
        }
        cout<<"Eligible";
    }
    catch(ageexception e){
        e.message();
    }
    return 0;

}

