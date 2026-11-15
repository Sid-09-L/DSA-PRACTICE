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
class SCLL{
    public:
        node* head;

        SCLL(){
            head=NULL;
        }
        void create(){
            int n,val;

            cout<<"Enter number of elements:";
            cin>>n;

            for(int i=0;i<n;i++){
                cout<<"Enter Value:";
                cin>>val;

                node*newnode=new node(val);

                if(head==NULL){
                    head=newnode;
                    newnode->next=head;
                }
                else{
                    node*temp=head;

                    while(temp->next!=head){
                        temp=temp->next;
                    }
                    temp->next=newnode;
                    newnode->next=head;
                }
            }
        }
        void insertfirst(int value){
            node*newnode=new node(value);

            if(head==NULL){
                head=newnode;
                newnode->next=head;
            }
            else{
                node*temp=head;

                while(temp->next!=head){
                    temp=temp->next;
                }
                newnode->next=head;
                head=newnode;
                temp->next=head;
            }
        }
        void insertlast(int value){
            node*newnode=new node(value);

            if(head==NULL){
                head=newnode;
                newnode->next=head;
            }
            else{
                node*temp=head;
                while(temp->next!=head){
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=head;
            }
        }
        void insertpos(int pos,int value){
            if(pos<1){
                cout<<"Invalid Position"<<endl;
                return ;
            }
            if(pos==1){
                insertfirst(value);
                return ;
            }
            if(head==NULL){
                cout<<"Invalid Postion"<<endl;
                return ;
            }
            node*temp=head;
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
                
                if(temp==head){
                    cout<<"Invalid position";
                    return;
                }
            }

            node* newnode=new node(value);

            newnode->next=temp->next;
            temp->next=newnode;
        }
        
        void insertaftervalue(int key,int value){
            if(head==NULL){
                cout<<"List is empty";
                return;
            }
            node*temp=head;

            do{
                if(temp->data==key){
                    node* newnode=new node(value);

                    newnode->next=temp->next;
                    temp->next=newnode;

                    return;
                }
                temp=temp->next;
            }
            while(temp!=head);
            cout<<"Value not found"<<endl;
        }

        void delfirst(){
            if(head==NULL){
                cout<<"list is Empty"<<endl;
                return;
            }
            node*temp=head;
            if(head->next==head){
                head=NULL;
                delete temp;
            }
            else{
                node*temp1=head;
                while(temp1->next!=head){
                    temp1=temp1->next;
                }
                head=head->next;
                temp1->next=head;

                delete temp;
            }
        }
        void dellast(){
            if(head==NULL){
                cout<<"list is empty"<<endl;
                return ;
            }
            if(head->next==head){
                delete head;
                head=NULL;
            }
            else{
                node*temp=head;
                node*temp1=NULL;

                while(temp->next!=head){
                    temp1=temp;
                    temp=temp->next;
                }
                temp1->next=head;
                delete temp;
            }
        }

        void delbypos(int pos){
            if(head==NULL || pos<1){
                cout<<"Inavlid Postion"<<endl;
                return;
            }
            if(pos==1){
                delfirst();
                return ;
            }
            node*temp=head;
            node*temp1=NULL;

            for(int i=1;i<pos;i++){
                temp1=temp;
                temp=temp->next;

                if(temp==head){
                    cout<<"Invalid Position"<<endl;
                    return ;
                }
            }
            temp1->next=temp->next;
            delete temp;
        }
        void display(){
            if(head==NULL){
                cout<<"List is empty";
                return;
            }
            node*temp=head;
            do{
                cout<<temp->data<<" ";
                temp=temp->next;
            }while(temp!=head);

            cout<<endl;
        }
};
int main(){
    SCLL L;
    int ch,pos,key,value;

    L.create();
    L.display();

     do{
        cout<<"\n1. Insert First";
        cout<<"\n2. Insert Last";
        cout<<"\n3. Insert By Position";
        cout<<"\n4. Insert After Value";
        cout<<"\n5. Delete First";
        cout<<"\n6. Delete Last";
        cout<<"\n7. Delete By Position";
        cout<<"\n8. Display";
        cout<<"\n0. Exit";

        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                L.insertfirst(value);
                L.display();
                break;

            case 2:
                cout<<"Enter value: ";
                cin>>value;
                L.insertlast(value);
                L.display();
                break;

            case 3:
                cout<<"Enter position and value: ";
                cin>>pos>>value;
                L.insertpos(pos,value);
                L.display();
                break;

            case 4:
                cout<<"Enter key and new value: ";
                cin>>key>>value;
                L.insertaftervalue(key,value);
                L.display();
                break;

            case 5:
                L.delfirst();
                L.display();
                break;

            case 6:
                L.dellast();
                L.display();
                break;

            case 7:
                cout<<"Enter position: ";
                cin>>pos;
                L.delbypos(pos);
                L.display();
                break;

            case 8:
                L.display();
                break;

            case 0:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid choice";
        }

    }while(ch!=0);


    

}