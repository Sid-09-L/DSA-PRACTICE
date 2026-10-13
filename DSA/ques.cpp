#include<iostream>
using namespace std;

int main(){
    int n,key;
    int comparisons=0;
    int found =0;

    cout<<"Enter Number of employees:";
    cin>>n;

    int arr[n];

    cout<<"Enter employee ID's:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter Employee ID to Search:";
    cin>>key;

    for(int i=0;i<n;i++){
        comparisons++;
        if(arr[i]==key){
            cout<<"Employee Found at postion:"<<i+1<<endl;
            found=1;
        }
    }
    if(found==0){
        cout<<"Employee ID not found."<<endl;
    }
    cout<<"Number of Comparisons:"<<comparisons<<endl;

    return 0;
}