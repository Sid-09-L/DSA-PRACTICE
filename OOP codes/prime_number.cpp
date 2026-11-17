#include<iostream>
using namespace std;

class prime{
    public:
        int n;

        void input(){
            cout<<"Enter the limit:";
            cin>>n;

        }
        void generate(){
            cout<<"Prime numbers are:";

            for(int i=2;i<=n;i++){
                int flag=0;
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<i<<" ";
                }
            }
        }
};
int main(){
    prime p;

    p.input();
    p.generate();

    return 0;
}