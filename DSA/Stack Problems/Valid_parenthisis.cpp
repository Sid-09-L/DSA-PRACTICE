#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isvalid(string str){                          //TIME COMPLEXITY=O(n)
    stack<char> s;

    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='(' || ch=='[' || ch=='{'){//OPENING
            s.push(ch);
        }
        else{
            if(s.empty()){
                return false;
            }
            //Match finding
            int top=s.top();
            if((top=='(' && ch==')')||(top=='[' && ch==']')||(top=='{' && ch=='}')){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str1="([}])";//Invalid
    string str2="([{}])";//VALID

    cout<<isvalid(str1)<<endl;
    cout<<isvalid(str2)<<endl;

    return 0;
}