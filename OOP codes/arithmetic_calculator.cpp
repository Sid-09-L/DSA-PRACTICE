#include<iostream>
using namespace std;

class calculator{
    public:
        float a,b;

        void input(){
            cout<<"Enter number 1:";
            cin>>a;

            cout<<"Enter number 2:";
            cin>>b;
        }
        void add(){
            cout<<"Addition:"<<a+b<<endl;
        }
        void subtract(){
            cout<<"SUbtraction:"<<a-b<<endl;
        }
        void multiply(){
            cout<<"Multiplication:"<<a*b<<endl;
        }
        void division(){
            if(b!=0){
                cout<<"Division:"<<a/b<<endl;
            }
            else{
                cout<<"Division by zero is not possible!"<<endl;
            }
        }
};
int main(){
    int choice;
    calculator c;

    c.input();

    do{
        cout<<"1.Add"<<endl;
        cout<<"2.subtract"<<endl;
        cout<<"3.Multiply"<<endl;
        cout<<"4.Divide"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;

        switch(choice){
            case 1:
            c.add();
            break;

            case 2:
            c.subtract();
            break;

            case 3:
            c.multiply();
            break;

            case 4:
            c.division();
            break;

            case 5:
            cout<<"Exiting........"<<endl;
            break;

            default:
            cout<<"Invalid choice!";
            break;
        }  
    }while(choice!=5);

    return 0;
}