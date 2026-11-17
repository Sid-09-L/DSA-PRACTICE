#include<iostream>
#include<list>
using namespace std;

class list1{
    list<int> s;

    public:
        void create(){
            int n,x;
            cout<<"Enter number of elements:";
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>x;
                s.push_back(x);
            }

        }
        void pop(){
            if(s.begin()==s.end()){
                cout<<"List is empty";
            }
            else{
                s.pop_back();
            }
        }
        void display(){
            
            list<int>::iterator it;
            for(it=s.begin();it!=s.end();it++){
                cout<<*it<<endl;
            }
        }
};
int main(){
    list1 A;

    A.create();
    A.display();

    return 0;
}
