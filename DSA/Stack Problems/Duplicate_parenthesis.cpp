#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isdup(string str){
    stack<char> s;

    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch!=')'){               //NON-CLosing elements
            s.push(ch);

        }
        else{                       //CLOSING
            char top=s.top();
            if(top=='('){
                return true;
            }
            while(s.top()!='('){
            s.pop();
        }
        s.pop();
        }
        
    }

    return false;
}
int main(){
    string str1="((a+b))";//INVALID :true
    string str2="((a+b)+(c+d))";//VALID:false

    cout<<isdup(str1)<<endl;
    cout<<isdup(str2)<<endl;

    return 0;
}