#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,string> M;

    int n;
    string country,currency;

    cout<<"Enter number of countries:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter country name:";
        cin>>country;

        cout<<"Enter currency:";
        cin>>currency;

        M[country]=currency;
    }

    cout<<"\nCountry - Currency Chart"<<endl;

    map<string,string>::iterator it;

    for(it=M.begin();it!=M.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    return 0;
}

