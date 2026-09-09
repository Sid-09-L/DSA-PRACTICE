#include<iostream>
using namespace std;

void arrays(int arr[],int n){
    
    
    for(int i=0;i<n;i++){
        cout<<"Enter value:";
        cin>>arr[i];
    }
}
void display(int arr[],int n){
    cout<<"Arrays=";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];


    arrays(arr,n);
    display(arr,n);

    return 0;
}