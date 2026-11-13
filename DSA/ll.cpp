#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data=data;
            next=NULL;
        }
};
void beginning(node* &head,int val){
    node*newnode= new node(val);
    newnode->next=head;
    head=newnode;
}
void display(node*head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void search(node* &head,int key){
    node*temp=head;
    int position=1;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"Element Found at position:"<<position<<endl;
            return ;
        }
        temp=temp->next;
        position++;
    }
    cout<<"Element not found"<<endl;
}void deletenode(node*&head,int val){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    if(head->data==val){
        node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL &&temp->next->data!=val){
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout<<"Element Not found"<<endl;
        return ;
    }
    node*del=temp->next;
    temp->next=del->next;
    delete del;
}
int main(){
    node*head=NULL;

    beginning(head,15);
    beginning(head,25);
    beginning(head,5);

    deletenode(head,25);
    

    display(head);

    return 0;
}