#include<iostream>
using namespace std;

int binary(int arr[],int size,int element){
    int low,high,mid;
    low=0;
    high=size-1;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={9,1,4,2,8,3,0};
    int size=sizeof(arr)/sizeof(int);
    int element=9;

    int index=binary(arr,size,element);

    if(index!=-1){
        cout<<"Element Found at index:"<<index;
    }
    else{
        cout<<"Element not found"<<endl;;
    }

    return 0;
    
}