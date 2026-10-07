#include<iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i; 
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
             if(min!=i){
                 swap(arr[i],arr[min]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[6]={7,4,10,8,3,1};
    int n=6;

    selection(arr,n);

    return 0;
}