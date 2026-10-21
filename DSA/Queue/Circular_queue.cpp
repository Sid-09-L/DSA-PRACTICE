#include<iostream>
using namespace std;

class queue{
    int *arr;

    int n;
    int currsize;

    int f,r;

    public:

    queue(int n){
        this->n=n;
        arr=new int[n];
        currsize=0;
        r=-1;
        f=0;
    }

    void push(int data){
        if(currsize==n){
            cout<<"QUEUE is FUll"<<endl;
            return ;
        }
        r=(r+1)%n;
        arr[r]=data;
        currsize++;

    }
    void pop(){
        if(empty()){
            cout<<"QUEUE is EMpty"<<endl;
            return ;
        }
        f=(f+1)%n;
        currsize--;
    }
    int front(){
        return arr[f];
    }
    bool empty(){
        return currsize==0;
    }
};
int main(){
    queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}