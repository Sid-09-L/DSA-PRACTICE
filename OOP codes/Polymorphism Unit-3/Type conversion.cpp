#include<iostream>
using namespace std;

class Distance{
    int meter;

    public:
    Distance(int m){
        meter=m;
    }

    void display(){
        cout<<"Distance="<<meter<<"Meters";
    }

};
int main(){
    int x=10;
    Distance d =x;

    d.display();
    return 0;
}