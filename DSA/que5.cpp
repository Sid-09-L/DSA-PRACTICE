#include<iostream>
#include<string>

using namespace std;

class student{
    int roll[7];
    string name[7];
    float cgpa[7];
    int comparisons,movements;

    public:
        student(){
            comparisons=0;
            movements=0;
        }
        void getdata(){
            for(int i=0;i<7;i++){
                cout<<"Enter Roll No:";
                cin>>roll[i];

                cout<<"Enter Name:";
                cin>>name[i];

                cout<<"Enter CGPA:";
                cin>>cgpa[i];

            }
            
        }
        void selectionsort(){
            
        }

};