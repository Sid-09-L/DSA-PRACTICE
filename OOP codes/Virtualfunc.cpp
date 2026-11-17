#include<iostream>
using namespace std;

class employee{
    public:
        virtual int calculatesalary(){
            return 1000;
        }
};
class manager:public employee{
    public:
        int calculatesalary(){
            return 1000+500;
        }
};
class developer:public employee{
    public:
        int calculatesalary(){
            return 1000+200;
        }
};
void display(employee *e){
    cout<<"Salary:"<<e->calculatesalary()<<endl;
}
int main(){
    manager m;
    developer d;
    
    employee *ptr;

    ptr=&m;

    cout<<"Manager ";
    display(ptr);

    ptr=&d;
    cout<<"Developer";
    display(ptr);
    
    return 0;
}