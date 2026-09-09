#include<iostream>
using namespace std;

void merge(int arr[],int st,int mid,int end){
    int temp[1000];
    int i=st;
    int j=mid+1;
    int k=st;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int idx=st;idx<=end;idx++){
        arr[idx]=temp[idx];
    }
}

void mergesort(int arr[],int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergesort(arr,st,mid);//LEFT HALF
        mergesort(arr,mid+1,end);//RIGHT HALF

        merge(arr,st,mid,end);

    }
}
int main(){
    int arr[5]={8,3,7,1,5};
    int n=5;
    int size=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,size-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
} 