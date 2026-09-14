#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void stockspan(vector<int> stock,vector<int> span){
    stack<int> s;
    s.push(0);
    span[0]=1;


    for(int i=1;i<stock.size();i++){
        int curr=stock[i];
        while(!s.empty() && curr>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            int prevhigh=s.top();
            span[i]=i-prevhigh;
        }

        s.push(i);//stores current index for future comparisons

    }

    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";
    }
}

int main(){
    vector<int> stock={100,80,60,70,60,85,100};
    vector<int> span={0,0,0,0,0,0,0,};

    stockspan(stock,span);
    return 0;

}

