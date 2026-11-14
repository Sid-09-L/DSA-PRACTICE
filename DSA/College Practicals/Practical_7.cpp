
#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};

class stack{
    public:
        node* top;

        stack(){
            top=NULL;
        }

        void push(int val){
            node* newnode=new node(val);
            newnode->next=top;
            top=newnode;
        }

        void pop(){
            if(top==NULL){
                cout<<"Stack is empty!"<<endl;
                return;
            }

            node* temp=top;
            cout<<"Deleted element: "<<top->data<<endl;
            top=top->next;
            delete temp;
        }

        void display(){
            if(top==NULL){
                cout<<"Stack is empty!"<<endl;
                return;
            }

            node* temp=top;

            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }

            cout<<endl;
        }
};

int main(){
    stack s;
    int choice,value,n;

    cout<<"Enter Number of elements:";
    cin>>n;

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++){
        cin>>value;
        s.push(value);
    }

    do{
        cout<<"\n1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Your Choice:";
        cin>>choice;

        switch(choice){

            case 1:
                cout<<"Enter element:";
                cin>>value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout<<"Exiting.......";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(choice!=4);

    return 0;
}
