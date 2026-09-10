#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound(){
        cout<<"Make sound";
    }
};
class cat:public animal{
    public:
    void sound() override{
        cout<<"Meowsss...";
    }

};
int main(){
    animal *ptr;
    cat c1;
    ptr=&c1;

    ptr->sound();
    cout<<endl;

    return 0;
}