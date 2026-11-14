#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    public:
    node* front;
    node*rear;

    queue(){
        front=rear=NULL;
    }
    void enqueue(int value){
        node* newnode=new node(value);

        if(front==NULL){
            front=rear=newnode;
        }
        rear->next=newnode;
        rear=newnode;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is Empty";
        }
        node*temp=front;
        front=front->next;
        delete temp;
    }
    void display(){
        node*temp=front;
        cout<<"Queue:";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    queue q;
    int n,value;
    int choice;

    cout<<"Enter number of elements:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>value;
        q.enqueue(value);
    }
    q.display();

    do{
        cout<<"Enter your choice:"<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter the elements:";
            cin>>value;
            q.enqueue(value);
            break;

            case 2:
            cout<<"Element popped";
            q.dequeue();
            break;

            case 3:
            cout<<"Stack Displayed";
            q.display();
            break;

            case 4:
            cout<<"Exiting.....";
            break;

            default:
            cout<<"invalid choice";

        }
    }
    while(choice!=4);
    return 0;
}