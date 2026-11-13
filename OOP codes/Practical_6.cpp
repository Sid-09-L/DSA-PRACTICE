#include<iostream>
using namespace std;

template<class T>

int push(T x[],int n){
    int top=-1;

    while(top<n-1){
        top++;
        cin>>x[top];
        cout<<" ";
    }
    return top;
}

template <class T>
void pop(T x[],int top){
    while(top!=-1){
        cout<<x[top]<<" ";
        top--;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Number of elements:";
    cin>>n;
    int a[n];
    char b[n];
    float c[n];
    string d[n];


    cout<<"Enter Integer array:";
    int top=push(a,n);
    pop(a,top);


    cout<<"Enter Character Array:";
    top=push(b,n);
    pop(b,top);

    cout<<"Enter float Array:";
    top=push(c,n);
    pop(c,top);

    cout<<"Enter String Array:";
    top=push(d,n);
    pop(d,top);

    return 0;

}