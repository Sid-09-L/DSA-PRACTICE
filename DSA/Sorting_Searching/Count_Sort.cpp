#include<iostream>
using namespace std;

void countsort(int arr[],int n){
    int max=arr[0];
    //FIND MAXIMUM ELEMENT

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    //Count array
    int count[100]={0};

    //Count frequency of each element
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //Rebuild orignal array
    int k=0;

    for(int i=0;i<=max;i++){
        while(count[i]>0){
            arr[k]=i;

            k++;
            count[i]--;
        }
    }
}
void disp(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,2,2,8,3,3,1};
    int n=7;

    countsort(arr,n);
    disp(arr,n);

    return 0;
}