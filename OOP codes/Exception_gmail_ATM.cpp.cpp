#include<iostream>
using namespace std;

class ATM{
    public:
        int correct=1234;
    
    void verifypin(){
        int enteredpin;

        cout<<"Enter ATM Pin:";
        cin>>enteredpin;

        try{
            if(enteredpin!=correct){
                throw enteredpin;
            }
            cout<<"PIN verified successfully!"<<endl;
            cout<<"Welcome to ATM"<<endl;
        }
        catch(int x){
            cout<<"Incorrect PIN!"<<endl;
        }
    }
};
int main(){
    ATM a;
    a.verifypin();

    return 0;
}