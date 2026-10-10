#include<iostream>
using namespace std;

int main(){
    int n,key;
    int comaprisons=0;
    int found=0;

    cout<<"Enter number of employees:";
    cin>>n;

    int arr[n];

    cout<<"Enter employee IDs:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Employees ID to be searched:";
    cin>>key;

    for(int i=0;i<n;i++){
        comaprisons++;
        if(arr[i]==key){
            cout<<"Employee found at postion:";
            found=1;
            cout<<i+1;
        }
    }
    if(found==0){
        cout<<"Employee ID not found";
    }
    cout<<"\n Number of comparisons:"<<comaprisons<<endl;

    return 0;
}