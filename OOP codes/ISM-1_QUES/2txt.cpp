#include<iostream>
#include<string>
using namespace std;

class student{
    protected:
        int roll;
        string name;

    public:
        void getstudent(){
            cout<<"Enter roll No:";
            cin>>roll;
            
            cout<<"Enter name:";
            cin>>name;
        }
};
class test:public student{
    protected:
        float m1,m2,m3,total;

    public:
        void getmarks(){
            getstudent();
                cout<<"Enter marks in 3 subjects:";
                cin>>m1>>m2>>m3;

                total=m1+m2+m3;
            
        }
};
class sports{
    protected:
        float score;

    public:
        void getsports(){
            cout<<"Enter sports score:";
            cin>>score;
        }
};
class result:public test,public sports{
    float percentage;
    string scholarship;

    public:
        void getresult(){
            getmarks();
            getsports();

            percentage=(total/3.0)+(score/2);

            if(percentage>=90){
                scholarship = "Full";
            }
            else if(percentage>=75){
                scholarship = "Half";
            }
            else{
               scholarship = "None";
            }
        }
        void display(){
             cout << "\nRoll Number: " << roll;
            cout << "\nName: " << name;
            cout << "\nTotal Marks: " << total;
            cout << "\nSports Score: " << score;
            cout << "\nFinal Percentage: " << percentage << "%";
            cout << "\nScholarship: " << scholarship << "\n";
        }
};
int main(){
    result r[5];

    for(int i=0;i<5;i++){
        cout<<"Enter details of student:"<<i+1<<endl;
        r[i].getresult();
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        cout<<"Student:"<<i+1;
        r[i].display();
    }

    return 0;
}