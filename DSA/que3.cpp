#include<iostream>
using namespace std;

int main(){
    int n,key,comparisons=0;
    int arr[100];

    cout<<"Enter Number of books:";
    cin>>n;

    cout<<"Enter book ID's in sorted order:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Book ID to search:";
    cin>>key;

    int low=0;
    int high=n-1;
    int mid;
    int found =0;

    while(low<=high){
        mid=(low+high)/2;
        comparisons ++;

        if(arr[mid]==key){
            cout<<"Book Found at position:"<<mid+1<<endl;
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        cout<<"Book ID not found."<<endl;
    }
    cout<<"Number of comparisons:"<<comparisons<<endl;

    return 0;
}