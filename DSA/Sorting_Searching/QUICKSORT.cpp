#include<iostream>
using namespace std;

int partition(int arr[],int st,int end){
    int pivot=arr[st];

    while(st<end){
        
        while(arr[st]<=pivot){
        st++;
        }
        while(arr[end]>pivot){
        end--;
        }
        if(st>end){
        swap(arr[st],arr[end]);
        }

    }
    swap(arr[st],arr[end]);

    return end;
}
void quicksort(int arr[],int st,int end){
    if(st<end){
        int p=partition(arr,st,end);

        quicksort(arr,st,p-1);  
        quicksort(arr,p+1,end); 
    }
}