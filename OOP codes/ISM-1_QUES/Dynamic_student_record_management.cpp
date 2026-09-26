#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    int marks;
    
    public:
        student(int r,string n,int m){
            roll=r;
            name=n;
            marks=m;
        }
        inline float percentage(){
            return marks;
        }
        void display(){
            cout<<"Roll No."<<roll<<endl;
            cout<<"Name:"<<name<<endl;
           cout<<"Marks="<<marks<<endl;
           cout<<"percentage="<<percentage()<<"%"<<endl;
        }
        ~student(){
            cout<<"Student object is destroyed"<<endl;
        }    
};
int main(){
    student* students[3];

    students[0]=new student(11,"Lolo",81);
    students[1]=new student(12,"Mangu",75);
    students[2]=new student(13,"Boba",51);

    for(int i=0;i<3;i++){
        students[i]->display();
        cout<<endl;
    }

    float highest=students[0]->percentage();
    int index=0;

    for(int i=0;i<3;i++){
        if(students[i]->percentage()>highest){
            highest=students[i]->percentage();
            index=i;
        }
    }
    cout<<"Highest percentage="<<highest<<endl;
    students[index]->display();

    return 0;

}