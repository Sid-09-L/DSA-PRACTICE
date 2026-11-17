#include<iostream>
using namespace std;

class student{
    public:
        int roll;
        string name;
        float marks;
        static int count;

        student(int r,string n,float m){
            roll=r;
            name=n;
            marks=m;
            count++;
        }
    inline void showmarks(){
        cout<<"marks:"<<marks<<endl;
    }
    static void showcount(){
        cout<<"Total Students:"<<count<<endl;
    }
    friend void display(student &s);

    ~student(){

    }

};
int student::count=0;

void display(student &s){
    cout<<"Roll No:"<<s.roll<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Marks:"<<s.marks<<endl;
}
int main(){
    student s1(101,"Amit",85);
    student s2(201,"Viraj",61);

    cout<<"Student 1 details:"<<endl;
    display(s1);
    s1.showmarks();

    cout<<endl;

    cout<<"Student 2 Details:"<<endl;
    display(s2);
    s2.showmarks();
    cout<<endl;

    return 0;
}