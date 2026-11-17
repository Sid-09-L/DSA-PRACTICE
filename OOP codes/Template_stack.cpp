#include<iostream>
using namespace std;

template<class T>
T findmax(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
template<class T>
class stack{
    public:
    T arr[5];
    int top;

    stack(){
        top=-1;
    }
    void push(T value){
        if(top==4){
            cout<<"Stack Overflowed!"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow!"<<endl;
        }
        else{
            cout<<"Popped Element:"<<arr[top]<<endl;
            top--;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty!"<<endl;

        }
        else{
            for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
            } 
            cout<<endl;
        }
    }
};
int main(){
    cout<<"Maximum Integer:"<<findmax(10,20)<<endl;
    cout<<"Maximum Float:"<<findmax(5.4,5.9)<<endl;
    cout<<"Maximum String:"<<findmax(string("Apple"),string("Mango"))<<endl;

    cout<<endl;

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    s.display();

    return 0;


}   
