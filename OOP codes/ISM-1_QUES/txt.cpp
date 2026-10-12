#include<iostream>
#include<string>
using namespace std;

class account{
    protected:
        int accountno;
        string name;
        float bal=10000;
    
        public:
            account(int a,string n,float b){
                accountno=a;
                name=n;
                bal=b;
            }
            void deposit(float amount){
                bal=bal+amount;
                cout<<"Amount deposited succcessfully."<<endl;
            }
            void display(){
                cout<<"\nAccount Number:"<<accountno;
                cout<<"\nHolder Name:"<<name;
                cout<<"\nBalance:"<<bal<<endl;
            }
            void displaybal(){
            cout<<"Balance after="<<bal<<endl;
        }
};

class savings:public account{
    float rate;

    public:
        savings(int a,string n,float b,float r):account(a,n,b),rate(r){

        }

        void withdraw(float amount){
            if(bal-amount>=1000){
                bal=bal-amount;
            }
            else{
                cout<<"Minimun balance is 1000rs."<<endl;
            }
        }
};
class current:public account{
    float overdraft;

    public:
        current(int a,string n,float b,float o):account(a,n,b),overdraft(o){

        }
        void withdraw(float amount){
            if(amount<=bal+overdraft){
                bal=bal-amount;
            }
            else{
                cout<<"\n Over draft limit exceeded"<<endl;
            }
        }
        
};
int main(){
    savings s1(101,"Amit",5000,4);
    savings s2(102,"Riya",8000,5);
    savings s3(103,"Sarthak",7000,6);

    current c1(201,"Neha",5000,2000);
    current c2(202,"babli",7000,3000);

    c1.display();
    c1.deposit(3000);
    c1.displaybal();
}