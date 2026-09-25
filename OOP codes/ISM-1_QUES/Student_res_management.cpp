#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    int ms1;
    int ms2;
    int ms3;

    static int count;

    public:
        student(int r,string n,int m1,int m2, int m3){
            roll=r;
            name=n;
            ms1=m1;
            ms2=m2;
            ms3=m3;

            count++;
        }
        int totalmarks(){
            return ms1+ms2+ms3;
        }
        inline float calcper(){
            float percentage=((ms1+ms2+ms3)/300.0)*100;
            return percentage;
        }
        void grade(){
            if(calcper()>=90){
                cout<<"Grade= A"<<endl;
            }
            else if(calcper()>=70 && calcper()<90){
                cout<<"Grade=B"<<endl;

            }
            else if(calcper()>=50 && calcper()<70){
                cout<<"Grade= C"<<endl;
            }
            else{
                cout<<"Fail"<<endl;
            }
        }
        static void showCount(){
            cout<<"Total number of students:"<<count<<endl;
        }
        friend void display(student s);
        ~student(){
            cout<<"Student object destroyed"<<endl;
        }
};
int student::count=0;

void display(student s){
    cout<<"Roll No."<<s.roll<<endl;
    cout<<"Student Name:"<<s.name<<endl;
    cout<<"Marks in Subject 1="<<s.ms1<<endl;
    cout<<"Marks in Subject 2="<<s.ms2<<endl;
    cout<<"Marks in Subject 3="<<s.ms3<<endl;
}
int main(){
    student students[3]={
        student(11,"Boba",70,70,70),
        student(12,"kalu",40,40,40),
        student(13,"lukda",60,60,60),
    };
    
    for(int i=0;i<3;i++){
        display(students[i]);
        cout<<"Percentage="<<students[i].calcper()<<"%"<<endl;
        cout<<endl;
    }
    float highest=students[0].calcper();
    int index=0;

    for(int i=0;i<3;i++){
        if(students[i].calcper()>highest){
            highest=students[i].calcper();
            index=i;
        }
    }
    cout<<"Highest Percentage="<<highest<<endl;
    display(students[index]);

    return 0;

}