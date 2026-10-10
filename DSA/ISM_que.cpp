#include<iostream>
using namespace std;

int main(){
    int n,exchanges=0;

    cout<<"Enter Number of employees:";
    cin>>n;

    int salary[n];

    cout<<"Enter salaries:";
    for(int i=0;i<n;i++){
        cin>>salary[i];
    }

    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(salary[j]>salary[j+1]){
                int temp=salary[j];
                salary[j]=salary[j+1];
                salary[j+1]=temp;
                exchanges++;
                flag=1;
            }
        }

        cout<<"Pass:"<<i+1<<"=";
        for(int i=0;i<n;i++){
            cout<<salary[i]<<" ";
        }
            cout<<endl;

        if(flag==0){
        break;
        }
        }
        
    cout<<"Sorted Salaries:";
    for(int i=0;i<n;i++){
        cout<<salary[i]<<"\t";
    }
    cout<<endl;
    cout<<"Total exchanges="<<exchanges<<endl;
    cout<<"Maximum salary="<<salary[n-1]<<endl;

    return 0;
}