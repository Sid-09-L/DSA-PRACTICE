#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};
void create(Node* &head,int n){
    if(n<=0){
        cout<<"Invalid";
        return;
    }
    head=new Node();

    cout<<"Enter data:";
    cin>>head->data;

    Node*temp=head;

    for(int i=0;i<n;i++){
        Node*newnode=new Node();
        cout<<"Enter value:";
        cin>>newnode->data;

        newnode->next=NULL;

        temp->next=newnode;
        temp=newnode;
    }
}
void display(Node* &head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void pushfront(Node* &head,int value){

    Node* newnode=new Node();

    newnode->data=value;
    newnode->next=head;

    head=newnode;

}
void pushback(Node* &head,int value){
    Node*newnode=new Node();

    newnode->data=value;
    newnode->next=NULL;

    Node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertpos(Node* &head,int value,int pos){
    Node*newnode=new Node();

    newnode->data=value;

    if(pos==1){
        head=newnode;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void popfront(Node* &head){
    if(head==NULL){
        return;
    }
    Node*temp=head;
    head=head->next;

    delete temp;
}
void popback(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
    }
    Node*temp=head;
    while(temp->next)
}