#include<iostream>
using namespace std;

class sorting{
    int arr[100],n;

    public:
        sorting(){
            n=7;
        }
        void getdata(){
            cout<<"Enter number of elements:";
            cin>>n;
            
            cout<<"Enter elements:";
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        }
        void merge(int st,int mid,int end){
            int i=st;
            int j=mid+1;
            int k=st;

            int b[100];

            while(i<=mid && j<=end){
                if(arr[i]<=arr[j]){
                    b[k]=arr[i];
                    i++;
                    k++;
                }
                else{
                    b[k]=arr[j];
                    j++;
                    k++;
                }
            }
            while(i<=mid){
                b[k]=arr[i];
                i++;
                k++;
            }
            while(j<=end){
                b[k]=arr[j];
                j++;
                k++;
            }
            for(k=st;k<=end;k++){
                arr[k]=b[k];
            }
        }
        void mergesort(int st,int end){
            if(st>=end){
                return;
            }
            int mid=(st+end)/2;

            mergesort(st,mid);//left half
            mergesort(mid+1,end);//right half

            merge(st,mid,end);
        }
        void display(){
            cout<<"Sorted array:";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
};
int main(){
    sorting s;

    s.getdata();
    s.mergesort(0,6);
    s.display();

    return 0;
}