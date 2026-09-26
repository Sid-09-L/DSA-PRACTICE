#include<iostream>
using namespace std;

class patient{
    int patient_id;
    string name;
    int age;
    int nod;
    static int count;

    public:
        patient(int id,string n,int a,int day){
            patient_id=id;
            name=n;
            age=a;
            nod=day;
            count++;
        }
        inline float roomcharge(){
            return 1000*nod;
        }
        float hospitalbill(){
            return roomcharge()+2000;

        }
        static void showCount(){
            cout<<"Total number patients="<<count<<endl;
        }
        friend void display(patient p);
};
int patient::count=0;

void display(patient p){
    cout<<"Patient ID:"<<p.patient_id<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"Age:"<<p.age<<endl;
    cout<<"Number of Days Admitted:"<<p.nod<<endl;
}

int main(){
    patient patients[3]={
        patient(101,"LOl",60,3),
        patient(102,"Mol",60,4),
        patient(103,"KOl",60,5),
    };

    for(int i=0;i<3;i++){
        display(patients[i]);
        cout<<endl;
    }

    patient::showCount();

    int highest=patients[0].hospitalbill();
    int index=0;

    for(int i=0;i<3;i++){
        if(patients[i].hospitalbill()>highest){
            highest=patients[i].hospitalbill();
            index=i;
        }
    }
    cout<<"Highest Bill="<<highest<<endl;
    display(patients[index]);

    return 0;
}