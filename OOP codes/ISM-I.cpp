#include<iostream>
using namespace std;

class bankaccount{
    int accountno;
    string name;
    float balance;
    float origbal;
    
    static int count;

    public:
    bankaccount(int acc,string n,float bal){
        accountno=acc;
        name=n;
        balance=bal;
        origbal=bal;
        count++;
    }
    void deposit(float amount){
        balance=balance+amount;
    }
    void withdraw(float amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance=balance-amount;
        }
    }
    inline void showbal(){
        cout<<"Updated Balance:"<<balance<<endl;
    }
    static void showcount(){
        cout<<"Toatal Accounts:"<<count<<endl;
    }
    friend void display(bankaccount b);

    ~bankaccount(){
        cout<<"Account object destroyed"<<endl;
    }

    
};
void display(bankaccount b){
        cout<<"Account No:"<<b.accountno<<endl;
        cout<<"Name:"<<b.name<<endl;
        cout<<"Orignal Balance:"<<b.origbal<<endl;
    }

int bankaccount::count=0;

int main(){
    bankaccount accounts[3]={
        bankaccount(101,"Amit",7000),
        bankaccount(102,"Boba",6000),
        bankaccount(103,"lalu",5000),
    };
    accounts[0].deposit(200);
    accounts[1].withdraw(900);

    for(int i=0;i<3;i++){
        display(accounts[i]);
        accounts[i].showbal();
        cout<<endl;
    }
    bankaccount::showcount();

    return 0;
}
