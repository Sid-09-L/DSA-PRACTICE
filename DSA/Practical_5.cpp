#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node*next;
        node*prev;
        node*head;
        node*tail;
       

    node(int val){
        data=val;
        next=prev=NULL;
        head=tail=NULL;
    }

    void insert(int val){
        node*newnode=new node(val);

        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    void display(){
        node*temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
    void onescomplement(){
        node*temp=head;

        while(temp!=NULL){
            cout<<1-temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    void twoscomplement(){
        node*temp=tail;

        int carry =1;

        while(temp!=NULL){
            if(temp->data ==0 && carry==1){
                temp->data=1;
                carry=0;
            }
            else if(temp->data==1 && carry==1){
                temp->data=0;
            }
            temp=temp->prev;
            
        }
        node *t=head;
        while(t!=NULL){
                cout<<t->data;
                t=t->next;
            }
            cout<<endl;
        
    }
};
int main(){
    int n,bit;

    node list(0);

    cout<<"Enter Number of Bits:";
    cin>>n;

    cout<<"Enter Binary bits:";

    for(int i=0;i<n;i++){
        cin>>bit;

        if(bit==0||bit==1){
            list.insert(bit);
        }
        else{
            cout<<"Invalid Bit, Only 1 or 0 can be entered."<<endl;
            return 0;
        }
    }
    cout<<"Orignal Binary:";
    list.display();

    cout<<"One's Complement:";
    list.onescomplement();

    cout<<"Two's Complement:";
    list.twoscomplement();
    return 0;
}