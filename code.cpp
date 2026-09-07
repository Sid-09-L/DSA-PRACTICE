#include<iostream>
using namespace std;

template<class T>
class Node{
  public:
  T data;
  Node* next;
};

template<class T>
class stack{
  public:
  //PUSH
void push(Node<T>* &top ,T value){
  Node<T>* newnode=new Node<T>();
  newnode->data=value;
  newnode->next=top;

  top=newnode;
}
//POP
void pop(Node<T>* &top){
  if(top==nullptr){
    cout<<"STACK IS EMPTY"<<endl;
  }

  Node<T>* temp=top;
  cout<<"Popped element is:"<<top->data<<endl;
  top=top->next;
  delete temp;
  
}
//TOP
void topelement(Node<T>* &top){
  if(top==nullptr){
    cout<<"Stack is empty"<<endl;
  }
  cout<<"Top element is:"<<top->data<<endl;
}

//DISPLAY
void display(Node<T>* top){
  if(top==nullptr){
    cout<<"Stack is empty"<<endl;

  }
  Node<T>*temp=top;
  cout<<"Stack:\n";
  
  while(temp!=nullptr){

    cout<<temp->data<<endl;
    temp=temp->next;
  }
}
};
int main(){
  Node<int>*top=nullptr;
  stack<int> s;

  s.push(top,10);
  s.push(top,20);
  s.push(top,30);
  s.display(top);

  s.topelement(top);

  s.pop(top);
  cout<<"After popping:\n";
  s.display(top);

  return 0;

}