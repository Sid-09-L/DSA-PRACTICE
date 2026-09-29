#include<iostream>
using namespace std;

class payroll {
    int empid;
    string empname;
    float basicsalary;
    float bonus;

    static int count;

    public:
        payroll(int id,string n, float sal,float b){
            empid=id;
            empname=n;
            basicsalary=sal;
            bonus=b;

            count++;
        }

        inline float netsal(){
            return basicsalary+bonus;

        }

        static void show(){
            cout<<"Total employees:"<<count<<endl;
        }
        friend void compare(payroll p1,payroll p2);
};

int payroll::count=0;

void compare(payroll p1,payroll p2){
    cout<<"Employee 1 net salary="<<p1.netsal()<<endl;
    cout<<"Employee 2 net salary="<<p2.netsal()<<endl;

    if(p1.netsal()>p2.netsal()){
        cout<<"Higher Salary:"<<p1.empname<<endl;
    }
    else if(p2.netsal()>p1.netsal()){
        cout<<"Higher Salary:"<<p2.empname<<endl;
    }
    else{
        cout<<"Bothe the employees have same salary"<<endl;
    }
}
int main(){
    payroll e1(101,"Viraj",40000,5000);
    payroll e2(102,"Amit",30000,7000);

    compare(e1,e2);

    payroll::show();

    return 0;
}