#include<iostream>
using namespace std;

int partition(int arr[],int st,int end){

    int pivot=arr[end];

    int i=st-1;

    for(int j=st;j<end;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);

    return i+1;
}
void quicksort(int arr[],int st,int end){
    if(st<end){
        int p=partition(arr,st,end);

        quicksort(arr,st,p-1);
        quicksort(arr,p+1,end);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[]={4,2,6,1,3};
    int n=5;

    quicksort(arr,0,n-1);
    display(arr,n);

    return 0;
}