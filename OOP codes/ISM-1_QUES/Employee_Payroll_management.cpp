#include<iostream>
using namespace std;

class employee{
    int employe_id;
    string name;
    int base_salary;
    float bonus;

    static int count;
    public:

    employee(int id,string n,int sal,int b){
        employe_id=id;
        name=n;
        base_salary=sal;
        bonus=b;
        count++;
    }
    inline float calcBonus(){
        return bonus;
    }
    float gross_salary(){
        int gross=base_salary+bonus;
        return gross;
    }
    float net_salary(int tax){
        float taxamount=(gross_salary()*tax)/100;
        float netS=gross_salary()-taxamount;
        return netS;
    }
    static void showcount(){
        cout<<"Total Employees:"<<count<<endl;
    }
    friend void display(employee e);

    ~employee(){
        cout<<"Employee Object Destroyed"<<endl;
    }

};
int employee::count=0;

void display(employee e){
    cout<<"Employee ID:"<<e.employe_id<<endl;
    cout<<"Employee name:"<<e.name<<endl;
    cout<<"Basic salary:"<<e.base_salary<<endl;
    cout<<"Bonus:"<<e.bonus<<endl;
    cout<<"Gross Salary:"<<e.gross_salary()<<endl;
    cout<<"Net salary:"<<e.net_salary(5)<<endl;
}
int main(){
    employee employees[3]={
        employee(101,"Amit",30000,5000),
        employee(102,"pol",40000,5000),
        employee(103,"lol",50000,5000),
    };
    for(int i=0;i<3;i++){
        display(employees[i]);
        cout<<endl;
    }
    return 0;
}