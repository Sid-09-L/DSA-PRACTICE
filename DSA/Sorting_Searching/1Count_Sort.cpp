#include<iostream>
using namespace std;

void countsort(int arr[],int n){
    //FIND MAX Element

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    //Count array
    int count[1000]={0};

    //Frequency of elements
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //To assign postion
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    //Sorting happens here
    int b[n]={0};
    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]]=arr[i];
    }
    //To copy the array
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
   
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={7,5,2,9,1,8};
    int n=6;

    countsort(arr,n);
    disp(arr,n);

    return 0;
}


//DrawBack of countsort:
// 1.) when K is so much greater than number of elements in array
// 2.)Don't works for floating and negative values
