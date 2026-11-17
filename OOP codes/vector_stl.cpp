#include<iostream>
#include<vector>
using namespace std;

class vector1{
    vector<int> s;
    int n;

    public:
        void create(){
            cout<<"Enter Number of elements:";
            cin>>n;
            int x;

            for(int i=0;i<n;i++){
                cin>>x;
                s.push_back(x);
            }
        }
        void pop(){
            if(s.begin()==s.end()){
                cout<<"Stack is empty!";
            }
            else{
                s.pop_back();
            }
        }
        void access(){
            int a;
            cout<<"Enter position to access:";
            cin>>a;

            cout<<"Element at position "<<s[a]<<endl;
            cout<<"Element at postion "<<s.at(a)<<endl;
        }
        void display(){
            vector<int>::iterator it;

            for(it=s.begin();it!=s.end();it++){
                cout<<*it<<endl;
            }
        }
};
int main(){
    vector1 V;

    V.create();
    V.display();
    V.access();

    return 0;
}