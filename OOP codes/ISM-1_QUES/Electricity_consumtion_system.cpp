#include<iostream>
using namespace std;

class consumer {
    int consumer_no;
    string name;
    float prev;
    float curr;
    static int count;

    public:
        consumer(int num,string n,float p,float c){
            consumer_no=num;
            name=n;
            prev=p;
            curr=c;
            count++;
        }
        inline float unitsconsumed(){
            return curr-prev;
        }
        static void showcount(){
            cout<<"Total Number of consumers:"<<count<<endl;
        }
        friend void display(consumer c);

        ~consumer(){
            cout<<"Consumer object destroyed"<<endl;
        }
};
int consumer::count=0;

void display(consumer c){
    cout<<"Consumer ID:"<<c.consumer_no<<endl;
    cout<<"Consumer Name:"<<c.name<<endl;
    cout<<"Previous Reading:"<<c.prev<<endl;
    cout<<"Current Reading:"<<c.curr<<endl;
}
int main(){
    consumer consumers[3]={
        consumer(101,"Viraj",1200,1500),
        consumer(102,"Lol",1300,1400),
        consumer(103,"Moto",1100,1600),
    };
    for(int i=0;i<3;i++){
        display(consumers[i]);
        cout<<"Units consumed="<<consumers[i].unitsconsumed()<<endl;
        cout<<endl;
    }

    consumer::showcount();

    return 0;

}