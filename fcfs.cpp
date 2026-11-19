#include<iostream>
using namespace std;

int main(){
    int n,at[20],bt[20],ct[20],tat[20],wt[20];

    cout<<"Enter number of processes:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"P"<<i+1<<"Arrival time and Burst time:";
        cin>>at[i]>>bt[i];
    }

    //Step 1: Sort Processes by arrival time(Simple bubble sort)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(at[i]>at[j+1]){
                swap(at[j],at[j+1]);
                swap(bt[j],bt[j+1]);
            }
        }
    }
    //Step 2:Run them one by one in order 
    int time=0;
    for(int i=0;i<n;i++){
        if(time<at[i]) time=at[i];
        time=time+bt[i];
        ct[i]=time;
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }

    //step 3:Print Table
    float totaltat=0;
    float totalwt=0;

    cout<<"\n Process \tAT\tBT\tCT\tTAT\tWT\n";
    for(int i=0;i<n;i++){
        cout<<"P"<<i+1<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
        totaltat=totaltat+tat[i];
        totalwt=totalwt+wt[i];
    }
    cout<<"Average TAT="<<totaltat/n<<endl;
    cout<<"Average WT="<<totalwt/n<<endl;

    return 0;
}