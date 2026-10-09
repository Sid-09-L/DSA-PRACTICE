#include<iostream>
using namespace std;

void merge(int arr[],int st,int mid,int end){
    int i=st;
    int j=mid+1;
    int k=st;

    int b[100];

    while(i<=mid &&j<=end){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            k++,i++;
        }
        else{
            b[k]=arr[j];
            k++,j++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        k++;i++;
    }
    while(j<=end){
        b[k]=arr[j];
        k++,j++;
    }
    for(k=st;k<=end;k++){
        arr[k]=b[k];
    }
}

void mergesort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int mid=(st+end)/2;
    mergesort(arr,st,mid);//Right half
    mergesort(arr,mid+1,end);//Left half

    merge(arr,st,mid,end);
}
int main(){
    int arr[7]={5,2,9,55,91,11,1};
    mergesort(arr,0,6);

    for(int x:arr){
        cout<<x<<"\t";
    }
    
    return 0;
}