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
            for(int i=0;i<6;i++){
                int max=i;
                for(int j=i+1;j<7;j++){
                    comparisons++;

                    if(cgpa[j]>cgpa[max]){
                        max=j;
                    }
                }
                if(max!=i){
                    int temproll=roll[i];
                    roll[i]=roll[max];
                    roll[max]=temproll;
                    movements=movements+3;

                    string tempname=name[i];
                    name[i]=name[max];
                    name[max]=tempname;
                    movements=movements+3;

                    float tempcgpa=cgpa[i];
                    cgpa[i]=cgpa[max];
                    cgpa[max]=tempcgpa;
                    movements=movements+3;
                }
                cout<<"\nPass:"<<i+1<<"-student recourd:"<<roll[i]<<" "<<name[i]<<" "<<cgpa[i]<<endl;

            }
        }
        void display(){
            cout<<"Merit list:"<<endl;
            for(int i=0;i<7;i++){
                cout<<"Roll No:"<<roll[i]<<" ";
                cout<<"Name:"<<name[i]<<" ";
                cout<<"CGPA:"<<cgpa[i]<<" ";
                
            }
            cout<<endl;
            cout << "\nTotal comparisons: " << comparisons;
            cout << "\nTotal data movements: " << movements;
            cout << "\nTime complexity: O(N^2)" << endl;
        }
};
int main() {
    student s;

    s.getdata();
    s.selectionsort();
    s.display();

    return 0;
}