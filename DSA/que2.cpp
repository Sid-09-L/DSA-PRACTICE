#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    string name;
    float cgpa;

};
int main(){
    int n;
    cout<<"Enter Number of students:";
    cin>>n;

    student s[100],temp;

    for(int i=0;i<n;i++){
        cout<<"Enter Details for student:"<<i+1<<endl;
        cout<<"\n Enter Roll :";
        cin>>s[i].roll;

        cout<<"Enter Name:";
        cin>>s[i].name;

        cout<<"Enter CGPA:";
        cin>>s[i].cgpa;
    }
    cout<<endl;

    //Sorting in descending order

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;i++){
            if(s[j].cgpa<s[j+1].cgpa){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    cout<<"\nStudents Sorted By CGPA(Descending):\n";

    for(int i=0;i<n;i++){
        cout<<"Roll No:"<<s[i].roll<<endl;
        cout<<"Name:"<<s[i].name<<endl;
        cout<<"CGPA:"<<s[i].cgpa<<endl;
        cout<<endl;
    }

    return 0;
}