#include<iostream>
using namespace std;


const int size=5;

template <class T>

void push(T s[],int &top, T value){
    if(top==size-1){
        cout<<"Stack Overflowed"<<endl;
    }
    else{
        top++;
        s[top]=value;
        cout<<"Element Pushed:"<<value<<endl;
    }
}
template<class T>
void pop(T s[],int &top){
    if(top==-1){
        cout<<"Stack underflowed!"<<endl;
    }
    else{
        cout<<"Popped Element:"<<s[top]<<endl;
        top--;
    }
}
template<class T>
void display(T s[],int top){
    if(top==1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack elements:";

        for(int i=top;i>=0;i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int intstack[size];
    char charstack[size];

    int top1=-1;
    int top2=-1;

    cout<<"---------Integer Stack----------"<<endl;

    push(intstack,top1,10);
    push(intstack,top1,20);
    push(intstack,top1,30);

    display(intstack,top1);

    cout<<endl;

    cout<<"------------Character Stack-----------"<<endl;

    push(charstack,top2,'A');
    push(charstack,top2,'B');
    push(charstack,top2,'C');

    display(charstack,top2);

    return 0;
}

