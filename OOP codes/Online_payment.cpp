#include<iostream>
using namespace std;

class onlineshop{
    public:

    void payment(int amount){
        cout<<"Payment Through cash:"<<endl;
        cout<<"Amount:"<<amount<<endl;
    }
    void payment(int amount,int upi){
        cout<<"Payment through UPI"<<endl;
        cout<<"UPI ID:"<<upi<<endl;
        cout<<"Amount:"<<amount<<endl;
    }
    void payment(int amount,int card,int cvv){
        cout<<"Payment through Card"<<endl;
        cout<<"Card Number :"<<card<<endl;
        cout<<"Amount:"<<amount<<endl;

    }
};
int main(){
    int choice,amount;
    int upi,cvv;
    int card;
    onlineshop s;

    cout<<"Enter Amount:";
    cin>>amount;
    cout<<endl;

    do{
        cout<<"1.Cash"<<endl;
        cout<<"2.UPI"<<endl;
        cout<<"3.Card"<<endl;
        cout<<endl;
        cout<<"Select a choice:";
        cin>>choice;

        switch(choice){
            case 1:
                s.payment(amount);
                choice=3;
                break;
            
            case 2:
                cout<<"Enter UPI ID:";
                cin>>upi;
                s.payment(amount,upi);
                choice=3;
                break;

            case 3:
                cout<<"Enter Card number:";
                cin>>card;
                cout<<"Enter CVV:";
                cin>>cvv;
                s.payment(amount,card,cvv);
                choice=3;
                break;
            
            default :
            cout<<"Invalid choice ! exited";
                
        }

    }while(choice!=3);
}