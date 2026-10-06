#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,3,7,1,2};
    int n=5;

    int key=4;

    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Key Found"<<endl;
            return 0;
        }
        else {
            cout<<"Key Not Found"<<endl;
            return 0;
        }
    }
    return 0;
}